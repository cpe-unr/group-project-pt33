//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Header file for limiter class (normalization)

#ifndef LIMITER_H
#define LIMITER_H
#include <iostream>
/**
 * Class that normalizes the wav file
 */
class Limiter{

public:

/** 
 * Constructor for the limiter class
 */
	Limiter();

/**
 * Deconstructor for the limiter class
 */
	virtual ~Limiter();
	
/**
 * Template for mono files
 * @param mono - type mono
 */
	template<typename mono>

/**
 * Process buffer for type mono
 * @param buffer - buffer for the file
 * @param bufferSize - size of the buffer in the file
 */
	void processBuffer(mono buffer, int bufferSize){
	
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

/** 
 * Template for stereo files
 * @param stereo - type stereo
 */
	template<typename stereo>

/**
 * Process buffer for type stereo
 * @param leftBuffer - left buffer in stereo file
 * @param rightBuffer - right buffer in stereo file
 * @param bufferSize - buffer size of the stereo file
 */
	void processBuffer(stereo rightBuffer, stereo leftBuffer,  int bufferSize){
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
};

#endif
