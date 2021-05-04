//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Processes sound to create an echo

#include "Echo.h"
#include <iostream>

Echo::Echo(){
	std::cout << "in defualt echo cotr" << std::endl;
}

Echo::Echo(int newDelay){
	delay = newDelay;
	std::cout << "in echo param cotr" << std::endl;
}

Echo::~Echo(){
	std::cout << "in echo dcotr" << std::endl;
}

/*template<typename mono>
void Echo::processBuffer(mono buffer, int bufferSize){
	std::cout << "in echo processorBuffer" << std::endl;

	for(int i = 0; i <= bufferSize - delay; i++){
		buffer[i] = ((buffer[i] + buffer[i+delay]) * 0.5);
	}
}

template<typename stereo>
void Echo::processBuffer(stereo rightBuffer, stereo leftBuffer,  int bufferSize){
	std::cout << "in echo processorBuffer" << std::endl;

	for(int i = 0; i <= bufferSize - delay; i++){
		leftBuffer[i] = ((leftBuffer[i] + leftBuffer[i+delay]) * 0.5);
		rightBuffer[i] = ((rightBuffer[i] + rightBuffer[i+delay]) * 0.5);
	}
}
*/

