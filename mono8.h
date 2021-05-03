//Created by: Mark Marsala and Marshall Farris
//Date: 5/4/2021
//Header file for mono8.cpp

#ifndef MONO8_H
#define MONO8_H
#include "waveHeader.h"

class Mono8 : public iFileIO
{
	unsigned char* buffer = NULL;
	wav_header waveHeader;
public:
	void readFile() override;
	void writeFile(const std::string &outFileName) override;
	unsigned char* getBuffer();
	int getBufferSize() const;
	virtual ~Mono8();
};

#endif
