//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Reading and writing for an 8 bit mono wav file

#include <string>
#include <fstream>
#include <iostream>
#include "mono8.h"

using namespace std;

Mono8::Mono8(const string newFile)
{
	fileName = newFile;
}

void Mono8::readFile()
{
	std::ifstream file(fileName,std::ios::binary | std::ios::in);
	if(file.is_open())
	{
		file.read((char*)&waveHeader, sizeof(wav_header));
		buffer = new unsigned char[waveHeader.data_bytes];
		file.read((char*)buffer, waveHeader.data_bytes);
		file.close();
		cout << "Reading 8 bit mono file" << endl;
	}
}

unsigned char* Mono8::getBuffer()
{
	return buffer;
}

void Mono8::writeFile(const std::string &outFileName)
{
	std::ofstream outFile(outFileName, std::ios::out | std::ios::binary);
	outFile.write((char*)&waveHeader,sizeof(wav_header));
	outFile.write((char*)buffer, waveHeader.data_bytes);
	outFile.close();
	cout << "Writing 8 bit mono file" << endl;
}

Mono8::~Mono8()
{
	if(buffer != NULL)
	{
		delete[] buffer;
	}
}

int Mono8::getBufferSize() const 
{
	return waveHeader.data_bytes;
}
