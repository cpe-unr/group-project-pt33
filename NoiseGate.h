//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Header file for noisegate class

#ifndef NOISEGATE_H
#define NOISEGATE_H
#include <iostream>

/**
*  Manages NoiseGate.
*  Processes sound to cut off sound under a certain threshold
*/
class NoiseGate{
	int noiseGap;
public:

/**
*  Default Constructor for NoiseGate Class
*/
	NoiseGate();

/**
*  Paramarized Constructor for NoiseGate Class
*  @param noiseGap - gap between the noise in int
*/
	NoiseGate(int noiseGap);

/**
*  Destructor for NoiseGate Class
*/
	virtual ~NoiseGate();

/**
*  Template
*  @tparam mono - one end
*/
	template<typename mono>

/**
*  Processes Buffer for mono
*  @param buffer - buffer in type mono
*  @param bufferSize - bufferSize in type int
*/
	void processBuffer(mono buffer, int bufferSize){
	
	int upperLimit = 128 + noiseGap;
	int lowerLimit = 128 - noiseGap;
//	cout << noiseGap << endl;
	for(int i = 0; i <= bufferSize; i++){
		if((buffer[i] <= upperLimit) && (buffer[i] >= lowerLimit)){
//			cout << "in limit for loop when if statement is true" << endl;
			buffer[i] = 128;
		}
		
		else{
//			cout << "in limit for loop when if is false" << endl;
			buffer[i] = buffer[i];
		}
	}
	
	std::cout << "in NoiseGate processBuffer" << std::endl;
}

/**
*  Template
*  @tparam stereo - two ends
*/
	template<typename stereo>

/**
*  Processes Buffer for stereo
*  @param rightuBffer - right buffer in type stereo
*  @param leftBuffer - left buffer in type stereo
*  @param bufferSize - bufferSize in type int
*/
	void processBuffer(stereo rightBuffer, stereo leftBuffer, int bufferSize){
	
	int upperLimit = noiseGap;
	int lowerLimit = 0 - noiseGap;
//	cout << noiseGap << endl;
	for(int i = 0; i <= bufferSize; i++){
		if((leftBuffer[i] <= upperLimit) && (leftBuffer[i] >= lowerLimit)){
//			cout << "in limit for loop when if statement is true" << endl;
			leftBuffer[i] = 0;
		}
		
		if((rightBuffer[i] <= upperLimit) && (rightBuffer[i] >= lowerLimit)){
//			cout << "in limit for loop when if statement is true" << endl;
			rightBuffer[i] = 0;
		}
	}
	
	std::cout << "in NoiseGate processBuffer" << std::endl;
}
};


#endif
