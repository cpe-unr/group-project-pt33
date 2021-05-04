//Created by: Mark Marsala and Marshall Farris
//Date: 5/4/2021
//Header file for mono16.cpp

#ifndef MONO16_H
#define MONO16_H
#include "waveHeader.h"
#include "iFileIO.h"

/**
 * Class that buffers 16-bit mono file
 */
class Mono16 : public iFileIO
{
	std::string fileName;
	short* buffer = NULL;
	wav_header waveHeader;
public:

/**
 * Paramaterized constructor for Mono16
 * @param newFile - the new file that is being used
 */
	Mono16(const std::string newFile);
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
	short* getBuffer();

/**
*  Returns waveHeader.data_bytes
*/
	int getBufferSize() const;

/**
 * Destructor for mono8
 */
	virtual ~Mono16();
};

#endif
