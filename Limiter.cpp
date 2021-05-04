//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Processes sound so that audio does not go above or below
//a certain threshold
#include "Limiter.h"
#include <iostream>

Limiter::Limiter(){
	std::cout << "In limiter default cotr" << std::endl;
}

Limiter::~Limiter(){
	std::cout << "in limiter dcotr" << std::endl;
}
/*
template<typename mono>
void Limiter::processBuffer(mono buffer, int bufferSize){
	
	int upperLimit = 128 + (128 * 0.8);
	int lowerLimit = 128 - (128 * 0.8);
	
	for(int i = 0; i <= bufferSize; i++){
		if(buffer[i] >= upperLimit){
//			cout << "in limit for loop when if statement is true" << endl;
			buffer[i] = upperLimit;
		}
		else if(buffer[i] <= lowerLimit){
			buffer[i] = lowerLimit;
		}
		else{
//			cout << "in limit for loop when if is false" << endl;
			buffer[i] = buffer[i];
		}
	}
	
	
	std::cout << "in limiter processBuffer" << std::endl;
}

template<typename stereo>
void Limiter::processBuffer(stereo rightBuffer, stereo leftBuffer,  int bufferSize){
	int upperLimit = (128 * 0.8);
	int lowerLimit = 0 - (128 * 0.8);
	
	for(int i = 0; i <= bufferSize; i++){
		if(leftBuffer[i] >= upperLimit){
			leftBuffer[i] = upperLimit;
		}
		if(rightBuffer[i] <= lowerLimit){
			rightBuffer[i] = lowerLimit;
		}
	}
}
*/
