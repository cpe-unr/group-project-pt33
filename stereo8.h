//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Header file for stereo8.cpp

#ifndef STEREO8_H
#define STEREO8_H
#include "waveHeader.h"
#include "iFileIO.h"

class Stereo8 : public iFileIO
{
	std::string fileName;
	unsigned char* buffer = NULL;
	wav_header waveHeader;
	unsigned char* leftBuffer = NULL;
	unsigned char* rightBuffer = NULL;
public:
	void readFile(const std::string &fileName) override;
	void writeFile(const std::string &outFileName) override;
	unsigned char* getBuffer();
	int getBufferSize() const;
	void allocateBuffer();
	void reallocateBuffer();
	unsigned char* getLeftBuffer();
	unsigned char* getRightBuffer();
	virtual ~Stereo8();
};
#endif
