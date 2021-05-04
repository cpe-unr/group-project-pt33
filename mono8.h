//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Header file for mono8.cpp

#ifndef MONO8_H
#define MONO8_H
#include "waveHeader.h"
#include "iFileIO.h"

/**
 * Class that buffers the 8-bit mono file
 */
class Mono8 : public iFileIO
{
	std::string fileName;
	unsigned char* buffer = NULL;
	wav_header waveHeader;
public:
	Mono8(const std::string newFile);
/**
 * Reads the file that is inputted into the program
 */
	void readFile() override;

/** 
 * Writes out the file that is outputted after using the program
 * @param outFileName - the new name for the outputted file
 */
	void writeFile(const std::string &outFileName) override;

/**
 * Returns buffer
 */
	unsigned char* getBuffer();

/**
*  Returns waveHeader.data_bytes
*/
	int getBufferSize() const;

/**
 * Destructor for mono8
 */
	virtual ~Mono8();
};

#endif
