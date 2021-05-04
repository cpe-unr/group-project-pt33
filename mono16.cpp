//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Reading and writing for an 16 bit mono wav file

#include <string>
#include <fstream>
#include <iostream>
#include "mono16.h"

using namespace std;

void Mono16::readFile(const std::string &fileName)
{
//	std::cout << "In mono16 reading file: " << fileName << std::endl;
	std::ifstream file(fileName,std::ios::binary | std::ios::in);
	if(file.is_open())
	{
		file.read((char*)&waveHeader, sizeof(wav_header));
		buffer = new short[waveHeader.data_bytes];
		file.read(reinterpret_cast<char *>(buffer), waveHeader.data_bytes);
		file.close();
		cout << "Reading 16 bit mono file" << endl;
	}
}

short* Mono16::getBuffer()
{
	return buffer;
}

void Mono16::writeFile(const std::string &outFileName)
{
	std::ofstream outFile(outFileName, std::ios::out | std::ios::binary);
	outFile.write((char*)&waveHeader,sizeof(wav_header));
	outFile.write(reinterpret_cast<char*>(buffer), waveHeader.data_bytes);
	outFile.close();
	cout << "Writing 16 bit mono file" << endl;
}

Mono16::~Mono16()
{
	if(buffer != NULL)
	{
		delete[] buffer;
	}
}

int Mono16::getBufferSize() const 
{
	return waveHeader.data_bytes;
}
