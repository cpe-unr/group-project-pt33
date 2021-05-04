//Created by: Mark Marsala and Marshall Farris
//Date: 5/4/2021
//Interface

#ifndef IFILEIO_H
#define IFILEIO_H

class iFileIO
{
protected:
	virtual void readFile(const std::string &fileName) = 0;
	virtual void writeFile(const std::string &outFileName) = 0;
};

#endif
