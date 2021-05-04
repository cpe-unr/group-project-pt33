//Created by Mark Marsala, Ethan Thai, Johnathon Franco Sosa, and Marshall Farris
//Date: 5/4/2021
//Reading and writing for an 16 bit stereo wav file

#include <string>
#include <fstream>
#include <iostream>
#include "stereo16.h"

using namespace std;

void Stereo16::readFile()
{
	std::ifstream file(fileName,std::ios::binary | std::ios::in);
	if(file.is_open())
	{
		file.read((char*)&waveHeader, sizeof(wav_header));
		buffer = new short[waveHeader.data_bytes];
		file.read(reinterpret_cast<char*>(buffer), waveHeader.data_bytes);
		file.close();
		cout << "Reading 16 bit stereo file" << endl;
	}
}

short* Stereo16::getBuffer()
{
	return buffer;
}

void Stereo16::writeFile(const std::string &outFileName)
{
	std::ofstream outFile(outFileName, std::ios::out | std::ios::binary);
	outFile.write((char*)&waveHeader,sizeof(wav_header));
	outFile.write(reinterpret_cast<char*>(buffer), waveHeader.data_bytes);
	outFile.close();
	cout << "Writing 16 bit stereo file" << endl;
}

Stereo16::~Stereo16()
{
	if(buffer != NULL)
	{
		delete[] buffer;
	}
}

int Stereo16::getBufferSize() const 
{
	return waveHeader.data_bytes;
}

void Stereo16::allocateBuffer()
{
	int size = (getBufferSize() / 2);
	leftBuffer = new short[size];
	rightBuffer = new short[size];
	
	for(int i = 0; i < size; i++)
	{
		leftBuffer[i] = buffer[2*i];
		rightBuffer[i] = buffer[(2*i)+1];
	}
}

void Stereo16::reallocateBuffer()
{
	int size = (getBufferSize() / 2);
	for(int i = 0; i < size; i++)
	{
		buffer[2*i] = leftBuffer[i];
		buffer[(2*i)+1] = rightBuffer[i];
	}
}

short* Stereo16::getLeftBuffer()
{
	return leftBuffer;
}

short* Stereo16::getRightBuffer()
{
	return rightBuffer;
}


