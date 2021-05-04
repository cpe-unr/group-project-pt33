//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Header file for echo class

#ifndef ECHO_H
#define ECHO_H

class Echo{
	int delay;
public:

/**
 * Constructor for the Echo class
 */
	Echo();

/**
 * Paramterized constructor 
 * @param newDelay - the newDelay that is updated in the function
 */
	Echo(int newDelay);

/**
 * Destructor for the Echo class
 */

	virtual ~Echo();

/**
 * Template for the process buffer function (mono)
 * @param buffer - the data for the wav file
 * @param bufferSize - the size of the data for the wav file
 */

	template<typename mono>
	void processBuffer(mono buffer, int bufferSize);

/**
 * Template for the process buffer function (stereo)
 * @param leftBuffer - the data for the left ear of the wav file
 * @param rightBuffer - the data for the right ear of the wav file
 */
	template<typename stereo>
	void processBuffer(stereo rightBuffer, stereo leftBuffer,  int bufferSize);
};

#endif
