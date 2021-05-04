/* Created by Mark Marsala, Ethan Thai, Johnathon Franco Sosa and Marshall Farris 
// for Dr. Lancaster's CS202, Spring 2021
// Semester Project - Team 33
*/

#ifndef User_h
#define User_h

#include <iostream>
#include <string>

/**
*  User Interface.
* ...
*/
class UI{
private:
	std::string fileName;
	std::string newFileName;
	int processorStatus;
	int option;
//	std::string fileName;

public:

/**
*  Constructor for the UI class
*/
	UI();

/**
*  Destructor for the UI class
*/
	virtual ~UI();

/**
*  Prompts user to choose a file
*/
	int fileSelection();




/**
*  Prompt user which file to open
*/
	void openFile();

/**
*  Setter for OpenFileName
*  @param fileOpen - attribute for opening the file
*/
	void setOpenFileName(std::string fileOpen);

/**
*  Getter for OpenFileName
*/
	std::string getOpenFileName();

/**
*  Setter for SaveFileName
*  @param fileSave - attribute for saving the file
*/
	void setSaveFileName(std::string fileSave);

/**
*  Getter for getFileSave
*/
	std::string getFileSave();

/**
*  Setter for ProcesorStatus
*  @param processor - attribute for processor
*/
	void setProcessorStatus(int processor);

/**
*  Getter for ProcesorStatus
*/
	int getProcessorStatus();

/**
*  Setter for private attribute option
*  @param option - pick an option, in integers
*/
	void setOption(int option);

/**
*  Getter for private attribute option
*/
	int getOption();

/**
* Uses a switch function to select the type of process buffer
* @param option - pick an option, in integers
*/
	int switchCase(int option);
};

#endif~