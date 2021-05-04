//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Header file for limiter class (normalization)

#ifndef LIMITER_H
#define LIMITER_H

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
	void processBuffer(mono buffer, int bufferSize);

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
	void processBuffer(stereo rightBuffer, stereo leftBuffer,  int bufferSize);
};

#endif
