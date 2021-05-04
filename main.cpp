/** @file */
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "User.h"
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

int main() {
	std::cout << "Hello, World!" << std::endl;
    
	std::vector<std::string> fileIn;

	fileIn.push_back("yes-8bit-mono.wav");
	fileIn.push_back("yes-8-bit-stereo.wav");
	fileIn.push_back("yes-16-bit-mono.wav");
	fileIn.push_back("yes-16-bit-stereo.wav");

	fileIn.push_back("._yes-8bit-mono.wav");
	fileIn.push_back("._yes-8-bit-stereo.wav");
	fileIn.push_back("._yes-16-bit-mono.wav");
	fileIn.push_back("._yes-16-bit-stereo.wav");
/*
	std::cout << "test of vector " << sizeof(fileIn) << std::endl;
	std::cout << fileIn[0] << std::endl;
	std::cout << fileIn[1] << std::endl;
	std::cout << fileIn[2] << std::endl;
	std::cout << fileIn[3] << std::endl;
*/	
	


	UI user;


	return 0;
}
