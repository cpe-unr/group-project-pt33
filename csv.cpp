//Created by: Mark Marsala, Marshall Farris, Ethan Thai, and Johnathon Franco Sosa
//Date: 5/4/2021
//Creates a new file to store the technical data and metadata (which we did not have time to do)

#include "csv.h"

using namespace std;

Csv::Csv(string newFile)
{
	inFile = newFile;
	object = new AnalyzeWav(inFile);
}

void Csv::outputCSV(const string &outFile)
{
	ofstream CSVFile(outFile);
	vector<string> techInfo = object->displayTechData();
	CSVFile << "Technical Information" << endl;
	for(int i = 0; i < techInfo.size(); i++)
	{
		CSVFile << techInfo[i] << endl;
	}
	CSVFile.close();
}


