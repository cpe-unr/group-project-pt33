/** @file */
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "User.h"
#include "mono8.h"
#include "mono16.h"
#include "stereo8.h"
#include "stereo16.h"
#include "Limiter.h"
#include "NoiseGate.h"
#include "Echo.h"
#include "analyzeWav.h"
#include "csv.h"
/**
 * \brief   The function bar.
 *
 * \details This function does something which is doing nothing. So this text
 *          is totally senseless and you really do not need to read this,
 *          because this text is basically saying nothing.
 *
 * \note    This text shall only show you, how such a \"note\" section
 *          is looking. There is nothing which really needs your notice,
 *          so you do not really need to read this section.
 *
 * \param[in]     a    Description of parameter a.
 * \param[out]    b    Description of the parameter b.
 * \param[in,out] c    Description of the parameter c.
 *
 * \return        The error return code of the function.
 *
 * \retval        ERR_SUCCESS    The function is successfully executed
 * \retval        ERR_FAILURE    An error occurred
 */
void fn(){

}

//Due to time constraints, we were not able to create a solid UI, but we have the foundation in User.cpp. To test our code, we used the main.

int main() {
	std::vector<std::string> fileIn;
	std::vector<std::string> fileOut;

	fileIn.push_back("yes-8bit-mono.wav");
	fileIn.push_back("yes-8-bit-stereo.wav");
	fileIn.push_back("yes-16-bit-mono.wav");
	fileIn.push_back("yes-16-bit-stereo.wav");
	fileIn.push_back("._yes-8bit-mono.wav");
	fileIn.push_back("._yes-8-bit-stereo.wav");
	fileIn.push_back("._yes-16-bit-mono.wav");
	fileIn.push_back("._yes-16-bit-stereo.wav");

//	UI user;
	
// File IO and sound processor testing
	
//	AnalyzeWav test1(fileIn[0]);
//	AnalyzeWav test2(fileIn[1]);
//	AnalyzeWav test3(fileIn[2]);
//	AnalyzeWav test4(fileIn[3]);
/*
	if(test1.getFileType() == 18)
	{
		std::cout << "This is a mono 8 bit file" << std::endl;
		Mono8 first(fileIn[0]);
		first.readFile();
		first.writeFile("test1Output.wav");
		fileOut.push_back("test1Output.wav");
		Csv firstcsv(fileIn[0]);
		firstcsv.outputCSV("CSV1.txt");
	}
	else if(test1.getFileType() == 116)
	{
		std::cout << "This is a mono 16 bit file" << std::endl;
		Mono16 first(fileIn[0]);
		first.readFile();
		first.writeFile("test1Output.wav");
		fileOut.push_back("test1Output.wav");
		Csv firstcsv(fileIn[0]);
		firstcsv.outputCSV("CSV1.txt");
	}
	else if(test1.getFileType() == 28)
	{
		std::cout << "This is a stereo 8 bit file" << std::endl;
		Stereo8 first(fileIn[0]);
		first.readFile();
		first.writeFile("test1Output.wav");
		fileOut.push_back("test1Output.wav");
		Csv firstcsv(fileIn[0]);
		firstcsv.outputCSV("CSV1.txt");
	}
	else if(test1.getFileType() == 216)
	{
		std::cout << "This is a stereo 16 bit file" << std::endl;
		Stereo16 first(fileIn[0]);
		first.readFile();
		first.writeFile("test1Output.wav");
		fileOut.push_back("test1Output.wav");
		Csv firstcsv(fileIn[0]);
		firstcsv.outputCSV("CSV1.txt");
	}
	
//If the user decides to process sound

	Mono8 echoTest(fileOut[0]);
	echoTest.readFile();
	Echo *Test1Echo = new Echo(5000);
	Test1Echo->processBuffer(echoTest.getBuffer(), 		echoTest.getBufferSize());
	echoTest.writeFile("echo1.wav");
	
	Mono8 noiseGateTest(fileOut[0]);
	noiseGateTest.readFile();
	NoiseGate *Test1NoiseGate = new NoiseGate(9);
	Test1NoiseGate->processBuffer(noiseGateTest.getBuffer(), noiseGateTest.getBufferSize());
	noiseGateTest.writeFile("noiseGate1.wav");
	
	Mono8 limiterTest(fileOut[0]);
	limiterTest.readFile();
	Limiter *Test1Limiter = new Limiter();
	Test1Limiter->processBuffer(limiterTest.getBuffer(), limiterTest.getBufferSize());
	limiterTest.writeFile("limiter1.wav");

/*	
	if(test2.getFileType() == 18)
	{
		std::cout << "This is a mono 8 bit file" << std::endl;
		Mono8 first(fileIn[1]);
		first.readFile();
		first.writeFile("test2Output.wav");
	}
	else if(test2.getFileType() == 116)
	{
		std::cout << "This is a mono 16 bit file" << std::endl;
		Mono16 first(fileIn[1]);
		first.readFile();
		first.writeFile("test2Output.wav");
	}
	else if(test2.getFileType() == 28)
	{
		std::cout << "This is a stereo 8 bit file" << std::endl;
		Stereo8 first(fileIn[1]);
		first.readFile();
		first.writeFile("test2Output.wav");
	}
	else if(test2.getFileType() == 216)
	{
		std::cout << "This is a stereo 16 bit file" << std::endl;
		Stereo16 first(fileIn[1]);
		first.readFile();
		first.writeFile("test2Output.wav");
	}
	
//If the user decides to process sound

	Stereo8 echoTest2(fileOut[1]);
	echoTest2.readFile();
	Echo *Test2Echo = new Echo(5000);
	Test2Echo->processBuffer(echoTest2.getBuffer(), 		echoTest2.getBufferSize());
	echoTest2.writeFile("echo2.wav");
	
	Stereo8 noiseGateTest2(fileOut[1]);
	noiseGateTest2.readFile();
	NoiseGate *Test2NoiseGate = new NoiseGate(9);
	Test2NoiseGate->processBuffer(noiseGateTest2.getBuffer(), noiseGateTest2.getBufferSize());
	noiseGateTest2.writeFile("noiseGate2.wav");
	
	Stereo8 limiterTest2(fileOut[1]);
	limiterTest2.readFile();
	Limiter *Test2Limiter = new Limiter();
	Test2Limiter->processBuffer(limiterTest2.getBuffer(), limiterTest2.getBufferSize());
	limiterTest2.writeFile("limiter2.wav");
*/
/*
	if(test3.getFileType() == 18)
	{
		std::cout << "This is a mono 8 bit file" << std::endl;
		Mono8 first(fileIn[2]);
		first.readFile();
		first.writeFile("test3Output.wav");
	}
	else if(test3.getFileType() == 116)
	{
		std::cout << "This is a mono 16 bit file" << std::endl;
		Mono16 first(fileIn[2]);
		first.readFile();
		first.writeFile("test3Output.wav");
	}
	else if(test3.getFileType() == 28)
	{
		std::cout << "This is a stereo 8 bit file" << std::endl;
		Stereo8 first(fileIn[2]);
		first.readFile();
		first.writeFile("test3Output.wav");
	}
	else if(test3.getFileType() == 216)
	{
		std::cout << "This is a stereo 16 bit file" << std::endl;
		Stereo16 first(fileIn[2]);
		first.readFile();
		first.writeFile("test3Output.wav");
	}
	
//If the user decides to process sound

	Mono16 echoTest3(fileOut[2]);
	echoTest3.readFile();
	Echo *Test3Echo = new Echo(5000);
	Test3Echo->processBuffer(echoTest3.getBuffer(), 		echoTest3.getBufferSize());
	echoTest3.writeFile("echo3.wav");
	
	Mono16 noiseGateTest3(fileOut[2]);
	noiseGateTest3.readFile();
	NoiseGate *Test3NoiseGate = new NoiseGate(9);
	Test3NoiseGate->processBuffer(noiseGateTest3.getBuffer(), noiseGateTest3.getBufferSize());
	noiseGateTest3.writeFile("noiseGate3.wav");
	
	Mono16 limiterTest3(fileOut[2]);
	limiterTest3.readFile();
	Limiter *Test3Limiter = new Limiter();
	Test3Limiter->processBuffer(limiterTest3.getBuffer(), limiterTest3.getBufferSize());
	limiterTest3.writeFile("limiter3.wav");
*/	
/*
	if(test4.getFileType() == 18)
	{
		std::cout << "This is a mono 8 bit file" << std::endl;
		Mono8 first(fileIn[3]);
		first.readFile();
		first.writeFile("test4Output.wav");
	}
	else if(test4.getFileType() == 116)
	{
		std::cout << "This is a mono 16 bit file" << std::endl;
		Mono16 first(fileIn[3]);
		first.readFile();
		first.writeFile("test4Output.wav");
	}
	else if(test4.getFileType() == 28)
	{
		std::cout << "This is a stereo 8 bit file" << std::endl;
		Stereo8 first(fileIn[3]);
		first.readFile();
		first.writeFile("test4Output.wav");
	}
	else if(test4.getFileType() == 216)
	{
		std::cout << "This is a stereo 16 bit file" << std::endl;
		Stereo16 first(fileIn[3]);
		first.readFile();
		first.writeFile("test4Output.wav");
	}
	
//If the user decides to process sound

	Stereo16 echoTest4(fileOut[3]);
	echoTest4.readFile();
	Echo *Test4Echo = new Echo(5000);
	Test4Echo->processBuffer(echoTest4.getBuffer(), 		echoTest4.getBufferSize());
	echoTest4.writeFile("echo4.wav");
	
	Stereo16 noiseGateTest4(fileOut[3]);
	noiseGateTest4.readFile();
	NoiseGate *Test4NoiseGate = new NoiseGate(9);
	Test4NoiseGate->processBuffer(noiseGateTest4.getBuffer(), noiseGateTest4.getBufferSize());
	noiseGateTest4.writeFile("noiseGate4.wav");
	
	Stereo16 limiterTest4(fileOut[3]);
	limiterTest4.readFile();
	Limiter *Test4Limiter = new Limiter();
	Test4Limiter->processBuffer(limiterTest4.getBuffer(), limiterTest4.getBufferSize());
	limiterTest4.writeFile("limiter4.wav");
*/
	return 0;
}
