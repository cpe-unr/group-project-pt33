//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Header file for echo class

#ifndef ECHO_H
#define ECHO_H

class Echo{
	int delay;
public:
		
	Echo();
	Echo(int newDelay);
	virtual ~Echo();
	template<typename mono>
	void processBuffer(mono buffer, int bufferSize);

	template<typename stereo>
	void processBuffer(stereo rightBuffer, stereo leftBuffer,  int bufferSize);
};

#endif
