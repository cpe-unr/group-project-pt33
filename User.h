/* Created by Mark Marsala, Ethan Thai, Johnathon Franco Sosa and Marshall Farris 
// for Dr. Lancaster's CS202, Spring 2021
// Semester Project - Team 33
*/

#ifndef User_h
#define User_h

#include <iostream>
#include <string>


class UI{
private:
	std::string fileName;
	std::string newFileName;
	int processorStatus;
	int option;
//	std::string fileName;

public:
	UI();
	virtual ~UI();

	int fileSelection();



/*	
	void openFile();

	void setOpenFileName(std::string fileOpen);
	std::string getOpenFileName();

	void setSaveFileName(std::string fileSave);
	std::string getFileSave();

	void setProcessorStatus(int processor);
	int getProcessorStatus();
*/
	void setOption(int option);
	int getOption();

	int switchCase(int option);
};

#endif