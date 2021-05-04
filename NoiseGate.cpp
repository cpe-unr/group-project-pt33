//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Processes sound to cut off sound under a certain threshold

#include "NoiseGate.h"
#include <iostream>

NoiseGate::NoiseGate(){
	std::cout << "In NoiseGate default cotr" << std::endl;
}

NoiseGate::NoiseGate(int noiseGap) : noiseGap(noiseGap){
	std::cout << "In NoiseGate param cotr" << std::endl;
}

NoiseGate::~NoiseGate(){
	std::cout << "in NoiseGate dcotr" << std::endl;
}

template<typename mono>
void NoiseGate::processBuffer(mono buffer, int bufferSize){
	
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

template<typename stereo>
void NoiseGate::processBuffer(stereo rightBuffer, stereo leftBuffer, int bufferSize){
	
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
