//Created by: Mark Marsala and Marshall Farris
//Date: 5/4/2021
//Interface

#ifndef IFILEIO_H
#define IFILEIO_H

/** 
 * Class that reads and writes the file inputted into the program
 */
class iFileIO{

protected:

/**
 * Function that reads the file
 */
	virtual void readFile() = 0;

/**
 * Function that writes the file
 * @param outFileName - writes out the new file name
 */
	virtual void writeFile(const std::string &outFileName) = 0;
};

#endif
