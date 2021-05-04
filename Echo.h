//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Header file for echo class

#ifndef ECHO_H
#define ECHO_H
#include <iostream>

/**
 * Class that creates an echo effect for the wav file
 */
class Echo{
	int delay;
public:

/**
 * Constructor for the Echo class
 */
	Echo();

/** 
 * Paramaterized constructor for the Echo class
 * @param newDelay - the new delay that will be added to the wav file
 */
	Echo(int newDelay);

/**
 * Destructor for the Echo class
 */
	virtual ~Echo();

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
	std::cout << "in echo processorBuffer" << std::endl;

	for(int i = 0; i <= bufferSize - delay; i++){
		buffer[i] = ((buffer[i] + buffer[i+delay]) * 0.5);
	}
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
	std::cout << "in echo processorBuffer" << std::endl;

	for(int i = 0; i <= bufferSize - delay; i++){
		leftBuffer[i] = ((leftBuffer[i] + leftBuffer[i+delay]) * 0.5);
		rightBuffer[i] = ((rightBuffer[i] + rightBuffer[i+delay]) * 0.5);
	}
}
};

#endif
