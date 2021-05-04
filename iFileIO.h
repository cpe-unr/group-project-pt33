//Created by: Mark Marsala and Marshall Farris
//Date: 5/4/2021
//Interface

#ifndef IFILEIO_H
#define IFILEIO_H

class iFileIO
{
protected:
/** 
 * Function for read file which defaults to 0
 */
	virtual void readFile() = 0;

/**
 * Function to write out the file
 * @param outFileName - the name of the file that is being outputted
 */
	virtual void writeFile(const std::string &outFileName) = 0;
};

#endif
