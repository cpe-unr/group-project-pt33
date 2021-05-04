//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Reading and writing for an 8 bit stereo wav file
//Even numbers are left buffer, odd numbers are right buffer

#include <string>
#include <fstream>
#include <iostream>
#include "stereo8.h"

using namespace std;

void Stereo8::readFile(const std::string &fileName)
{
	std::ifstream file(fileName,std::ios::binary | std::ios::in);
	if(file.is_open())
	{
		file.read((char*)&waveHeader, sizeof(wav_header));
		buffer = new unsigned char[waveHeader.data_bytes];
		file.read((char*)buffer, waveHeader.data_bytes);
		file.close();
		cout << "Reading 8 bit stereo file" << endl;
	}
}

unsigned char* Stereo8::getBuffer()
{
	return buffer;
}

void Stereo8::writeFile(const std::string &outFileName)
{
	std::ofstream outFile(outFileName, std::ios::out | std::ios::binary);
	outFile.write((char*)&waveHeader,sizeof(wav_header));
	outFile.write((char*)buffer, waveHeader.data_bytes);
	outFile.close();
	cout << "Writing 8 bit stereo file" << endl;
}

Stereo8::~Stereo8()
{
	if(buffer != NULL)
	{
		delete[] buffer;
	}
}

int Stereo8::getBufferSize() const 
{
	return waveHeader.data_bytes;
}

void Stereo8::allocateBuffer()
{
	int size = (getBufferSize() / 2);
	leftBuffer = new unsigned char[size];
	rightBuffer = new unsigned char[size];
	
	for(int i = 0; i < size; i++)
	{
		leftBuffer[i] = buffer[2*i];
		rightBuffer[i] = buffer[(2*i)+1];
	}
}

void Stereo8::reallocateBuffer()
{
	int size = (getBufferSize() / 2);
	for(int i = 0; i < size; i++)
	{
		buffer[2*i] = leftBuffer[i];
		buffer[(2*i)+1] = rightBuffer[i];
	}
}

unsigned char* Stereo8::getLeftBuffer()
{
	return leftBuffer;
}

unsigned char* Stereo8::getRightBuffer()
{
	return rightBuffer;
}
