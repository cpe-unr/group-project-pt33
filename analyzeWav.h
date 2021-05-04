//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Header file for analyzeWav.cpp

#ifndef ANALYZEWAV_H
#define ANALYZEWAV_H

#include "waveHeader.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/**
 * Class that grabs the wav files information
 */
class AnalyzeWav{
	std::string fileIn;
	int numChan = 0;
	int bitSize = 0;
	int PCM = 0;
	int bitRate = 0;
	int sampleRate = 0;

	wav_header waveHeader;

public:
/**
 * Grabs information from the wav file
 * @param fin - the file that is being inputted into the program
 */
	AnalyzeWav(const std::string fin);

/**
 * The specific function that grabs the information from the wav file
 */
	void getTechData();

/**
 * Grabs the channel from the wav file
 */
	int getChan();

/**
 * Grabs the number of bits from the wav file
 */
	int getNumBits();

/**
 * Finds out what the file type is integer-wise
 */
	int getFileType();

/**
 * Finds out what the type of file that is being inputted is
 */
	std::string getPCM();

/**
 * Grabs the bit rate of the file
 */
	int getBitRate();

/**
 * Grabs the sample rate of the file
 */
	int getSampleRate();

/**
 * The vector grabs the data and inputs all of the information into it
 */
	std::vector<std::string> displayTechData();
	
/**
 * Friend function that displays all the information that was grabbed from the above functions
 * @param out - the file output name
 * @param wav - the actual wav file
 */
	friend std::ostream& operator << (std::ostream &out, AnalyzeWav &wav);
	
};

#endif
