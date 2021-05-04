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

class AnalyzeWav{
	std::string fileIn;
	int numChan = 0;
	int bitSize = 0;
	int PCM = 0;
	int bitRate = 0;
	int sampleRate = 0;

	wav_header waveHeader;

public:
	AnalyzeWav(const std::string fin);
	void getTechData();
	int getChan();
	int getNumBits();
	int getFileType();
	std::string getPCM();
	int getBitRate();
	int getSampleRate();
	std::vector<std::string> displayTechData();
	
	friend std::ostream& operator << (std::ostream &out, AnalyzeWav &wav);
	
};

#endif
