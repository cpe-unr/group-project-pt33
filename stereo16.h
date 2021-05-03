//Created by: Mark Marsala and Marshall Farris
//Date: 5/4/2021
//Header file for stereo16.cpp

#ifndef STEREO16_H
#define STEREO16_H
#include "waveHeader.h"
#include "iFileIO.h"

class Stereo16 : public iFileIO
{
	std::string fileName;
	short* buffer = NULL;
	wav_header waveHeader;
	short* leftBuffer = NULL;
	short* rightBuffer = NULL;
public:
	void readFile() override;
	void writeFile(const std::string &outFileName) override;
	short* getBuffer();
	int getBufferSize() const;
	void allocateBuffer();
	void reallocateBuffer();
	short* getLeftBuffer();
	short* getRightBuffer();
	virtual ~Stereo16();
};

#endif
