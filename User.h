/* Created by Mark Marsala, Ethan Thai, and Marshall Farris 
// for Dr. Lancaster's CS202, Spring 2021
// Semester Project - Team 33
*/

#ifndef User_h
#define User_h

#include <iostream>
#include <string>


class UI{
private:
	std::string openFileName;
	std::string saveFileName;
	int processorStatus;
//	std::string fileName;

public:
	UI();
	virtual ~UI();

	void setOpenFileName(std::string fileOpen);
	std::string getOpenFileName();

	void setSaveFileName(std::string fileSave);
	std::string getFileSave();

	void setProcessorStatus(int processor);
	int getProcessorStatus();
};

#endif