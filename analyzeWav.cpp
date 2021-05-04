//Created by: Mark Marsala, Marshall Farris, Ethan Thai, and Johnathon Franco Sosa
//Date: 5/4/2021
//File retreiving technical information about wav file

#include "analyzeWav.h"

using namespace std;

AnalyzeWav::AnalyzeWav(string fin)
{
	fileIn = fin;
	getTechData();
}

void AnalyzeWav::getTechData()
{
	ifstream file(fileIn, ios::binary | ios::in);
	if(file.is_open())
	{
		file.read((char*)&waveHeader, sizeof(wav_header));
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
	
	return output;
}

int AnalyzeWav::getChan()
{
	return numChan;
}

int AnalyzeWav::getNumBits()
{
	return bitSize;
}

int AnalyzeWav::getFileType()
{
	if((numChan == 1) && (bitSize == 8))
	{
		return 18;
	}
	else if((numChan == 1) && (bitSize == 16))
	{
		return 116;
	}
	else if((numChan == 2) && (bitSize == 8))
	{
		return 28;
	}
	else if((numChan == 2) && (bitSize == 16))
	{
		return 216;
	}
	return 0;
}

string AnalyzeWav::getPCM()
{
	if(PCM == 1)
	{
		return "PCM";
	}
	else if(PCM == 3)
	{
		return "IEEE Float";
	}
	else
	{
		return "Audio Format Unknown";
	}
}

int AnalyzeWav::getBitRate()
{
	return bitRate;
}

int AnalyzeWav::getSampleRate()
{
	return sampleRate;
}

ostream& operator << (ostream &out, AnalyzeWav &wav)
{
	out << "Number of Channels: " << wav.getChan() << "\n";
	out << "Bit Depth: " << wav.getNumBits() << "\n";
	out << "Audio Format: " << wav.getPCM() << "\n";
	out << "Byte Rate: " << wav.getBitRate() << "\n";
	out << "Sample Rate: " << wav.getSampleRate() << "\n";
	return out;
}
