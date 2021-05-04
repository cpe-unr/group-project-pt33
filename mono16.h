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

/**
 * Reads the inputted wav file
 */
	void readFile() override;

/** Creates the outputted 16 bit mono wav file which will override the previous one
 * @param outFileName - name of the file
 */
	void writeFile(const std::string &outFileName) override;

/** Grabs the buffer from the wav file
 */
	short* getBuffer();

/** Grabs the buffer size of the wav file
 */
	int getBufferSize() const;

/**
 * Destructor for the Mono16 class
 */
	virtual ~Mono16();
};

#endif
