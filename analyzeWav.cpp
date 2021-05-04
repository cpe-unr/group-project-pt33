//Created by: Mark Marsala, Marshall Farris, Ethan Thai, and Johnathon Franco Sosa
//Date: 5/4/2021
//File retreiving technical information about wav file

#include "analyzeWav.h"

using namespace std;

AnalyzeWav::AnalyzeWav(string newFileName)
{
	fileName = newFileName;
	getTechData();
}

void AnalyzeWav::getTechData()
{
	ifstream file(fileName, ios::binary | ios::in);
	if(file.is_open())
	{
		file.read((char*)&waveHeader, sizeof(wave_header));
		file.close();
	}
	numChan = waveHeader.num_channels;
	bitSize = waveHeader.bit_depth;
	PCM = waveHeader.audio_format;
	bitRate = waveHeader.byte_rate;
	sampleRate = waveHeader.sample_rate;
}

vector<string> AnalyzeWav::displayTechData()
{
	vector<string> output;
	
	output.push_back("Number of Channels: ");
	output.push_back(to_string(numChan));
	
	output.push_back("Bit Depth: ");
	output.push_back(to_string(bitSize));
	
	output.push_back("Audio Format: ");
	output.push_back(getPCM());
	
	output.push_back("Byte Rate: ");
	output.push_back(to_string(bitRate));
	
	output.push_back("Sample Rate: ");
	output.push_back(to_string(sampleRate));
}
