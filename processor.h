//Created by: Mark Marsala and Marshall Farris
//Date: 5/4/2021
//Header file for processor.cpp

#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <cstdint>
#include <cmath>

class Processor
{
public:
	virtual void processBuffer(unsigned char* buffer, int bufferSize) = 0;
};


#endif
