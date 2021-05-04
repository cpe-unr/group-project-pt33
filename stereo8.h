//Created by Mark Marsala, Ethan Thai, Johnathon Franco Sosa, and Marshall Farris
//Date: 5/4/2021
//Header file for stereo8.cpp

#ifndef STEREO8_H
#define STEREO8_H
#include "waveHeader.h"
#include "iFileIO.h"

/**
*  Manages stereo8.
*  Reads and writes stereo8, as well as allocates and reallocates memory.
*  Uses iFileIo as an interface.
*/

class Stereo8 : public iFileIO
{
	std::string fileName;
	unsigned char* buffer = NULL;
	wav_header waveHeader;
	unsigned char* leftBuffer = NULL;
	unsigned char* rightBuffer = NULL;
public:
/**
*  Overrides method from interface
*  Reads an 8 bit stereo wav file
*/
	void readFile() override;

/**
*  Overrides method from interface
*  Writes an 8 bit stereo wav file
*  @param outFileName - pointer to the outFileName
*/
	void writeFile(const std::string &outFileName) override;

/**
*  Returns buffer
*/
	unsigned char* getBuffer();

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
	unsigned char* getLeftBuffer();

/**
*  Returns right Buffer
*/
	unsigned char* getRightBuffer();

/**
*  Deconstructor for Stereo8.
*  Deletes buffer if not NULL
*/
	virtual ~Stereo8();
};
#endif
