//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Header file for mono8.cpp

#ifndef MONO8_H
#define MONO8_H
#include "waveHeader.h"
#include "iFileIO.h"

class Mono8 : public iFileIO
{
	std::string fileName;
	unsigned char* buffer = NULL;
	wav_header waveHeader;
public:

/**
 * Reads the inputted wav file
 */
	void readFile() override;

/** Creates the outputted 8 bit mono wav file which will override the previous one
 * @param outFileName - name of the file
 */
	void writeFile(const std::string &outFileName) override;

/** Grabs the buffer from the wav file
 */
	unsigned char* getBuffer();

/** Grabs the buffer size of the wav file
 */
	int getBufferSize() const;

/**
 * Destructor for the Mono8 class
 */
	virtual ~Mono8();
};

#endif
