//Created by: Mark Marsala, Marshall Farris, Ethan Thai, and Johnathon Franco Sosa
//Date: 5/4/2021
//Header file for csv.cpp

#ifndef CSV_H
#define CSV_H
#include "analyzeWav.h"

class Csv
{
	std::string inFile;
	AnalyzeWav* object;
public:
	Csv(std::string newFile);
	void outputCSV(const std::string &outFile);
};

#endif
