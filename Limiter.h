//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Header file for limiter class (normalization)

#ifndef LIMITER_H
#define LIMITER_H

class Limiter{
public:
	Limiter();
	virtual ~Limiter();
	
	template<typename mono>
	void processBuffer(mono buffer, int bufferSize);

	template<typename stereo>
	void processBuffer(stereo rightBuffer, stereo leftBuffer,  int bufferSize);
};

#endif
