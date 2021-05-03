//Created by: Mark Marsala, Marshall Farris, and Johnathon Franco Sosa
//Date: 5/4/2021
//Header file for noisegate class

#ifndef NOISEGATE_H
#define NOISEGATE_H

class NoiseGate{
	int noiseGap;
public:
	NoiseGate();
	NoiseGate(int noiseGap);
	virtual ~NoiseGate();
	template<typename mono>
	void processBuffer(mono buffer, int bufferSize);

	template<typename stereo>
	void processBuffer(stereo rightBuffer, stereo leftBuffer,  int bufferSize);
};


#endif
