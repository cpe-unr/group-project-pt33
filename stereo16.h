//Created by: Mark Marsala and Marshall Farris
//Date: 5/4/2021
//Header file for stereo16.cpp

#ifndef STEREO16_H
#define STEREO16_H
#include "waveHeader.h"
#include "iFileIO.h"

/**
*  Manages stereo16.
*  Reads and writes stereo16, as well as allocates and reallocates memory.
*  Uses iFileIo as an interface.
*/
class Stereo16 : public iFileIO
{
	std::string fileName;
	short* buffer = NULL;
	wav_header waveHeader;
	short* leftBuffer = NULL;
	short* rightBuffer = NULL;
public:

/**
*  Overrides method from interface
*  Reads a 16 bit stereo wav file
*/
	void readFile() override;

/**
*  Overrides method from interface
*  Writes a 16 bit stereo wav file
*  @param outFileName - pointer to the outFileName
*/
	void writeFile(const std::string &outFileName) override;

/**
*  Returns buffer
*/
	short* getBuffer();

/**
*  Returns waveHeader.data_bytes
*/
	int getBufferSize() const;

/**
*  Allocates Buffer
*/
	void allocateBuffer();

/**
*  Reallocates Buffer
*/
	void reallocateBuffer();

/**
*  Returns left Buffer
*/
	short* getLeftBuffer();

/**
*  Returns right Buffer
*/
	short* getRightBuffer();

/**
*  Deconstructor for Stereo16.
*  Deletes buffer if not NULL
*/
	virtual ~Stereo16();
};

#endif
