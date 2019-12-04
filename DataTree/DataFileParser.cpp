//
//
//
#include "DataFileParser.h"

DataFileParser::DataFileParser()
{

}

int DataFileParser::Foo()
{
	return 10;
}

string DataFileParser::GetFileData(string DataFilePath)
{
	string line(DataFilePath);

	ifstream myfile(DataFilePath);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
		return line;
	}
	else
	{
		cout << "Unable to open file";
		return string("Unable to open file");
	}
	return line;
}

char* DataFileParser::GetFileData(char* DataFilePath)
{
	string line(DataFilePath);
	return "foo";
}
