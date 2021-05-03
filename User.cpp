/* Created by Mark Marsala, Ethan Thai, and Marshall Farris 
// for Dr. Lancaster's CS202, Spring 2021
// Semester Project - Team 33
*/


#include "User.h"


UI::UI(){
	std::cout << "in defualt user cotr" << std::endl;
/*
	std::string fileName;
	std::cout << "Please enter an audio file name to open" << std::endl;
	std::cin >> fileName;
	std::cout << "file name entered is: " << fileName << std::endl;
*/
}

UI::~UI(){
	std::cout << "in defualt user dctor" << std::endl;
}

void setOpenFileName(std::string fileOpen){
	fileOpen = fileOpen;
}
std::string getFileOpen(){
	std::string fileName;
	std::cout << "Please enter an audio file name to open" << std::endl;
	std::cin >> fileName;
	std::cout << "file name entered is: " << fileName << std::endl;
	return fileName;
}

void setSaveFileName(std::string fileSave){

}
std::string getFileSave(){

}

void setProcessorStatus(int processor){

}
int getProcessorStatus(){

}