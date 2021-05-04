//Created by Mark Marsala, Ethan Thai, Johnathon Franco Sosa, and Marshall Farris
//Date: 5/4/2021
//Header file for noisegate class

#ifndef NOISEGATE_H
#define NOISEGATE_H

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
	void processBuffer(mono buffer, int bufferSize);

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
	void processBuffer(stereo rightBuffer, stereo leftBuffer,  int bufferSize);
};


#endif
