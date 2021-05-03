//Created by: Mark Marsala and Marshall Farris
//Date: 5/4/2021
//Header file for mono16.cpp

#ifndef MONO16_H
#define MONO16_H
#include "waveHeader.h"
#include "iFileIO.h"

class Mono16 : public iFileIO
{
	std::string fileName;
	short* buffer = NULL;
	wav_header waveHeader;
public:
	void readFile() override;
	void writeFile(const std::string &outFileName) override;
	short* getBuffer();
	int getBufferSize() const;
	virtual ~Mono16();
};

#endif
