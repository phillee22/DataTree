//
//
//
#include "DataFileParser.h"

int DataFileParser::GetFileData(string** strarray, string DataFilePath)
{
	*(strarray) = new string[20];

	string line;
	int i = 0;

	string foo = string(line);

	ifstream myfile(DataFilePath);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			size_t comma = line.find(',');

			char buffer[20];

			std::size_t length = line.copy(buffer, line.length()-comma, comma);
			buffer[length] = '\0';

			*(strarray+i) = new string(buffer);

			//std::strcpy(strarray[i]->c_str, line.c_str);
			//strcpy(*(strarray + i), line);
			i++;
		}
		myfile.close();
	}

	return i;
}

/*
//IDataObject* DataFileParser::GetFileData(string DataFilePath)
MyStringDataObject* DataFileParser::GetFileData(string DataFilePath)
{
	static MyStringDataObject dataarray[20];
	string line;
	int i = 0;

	ifstream myfile(DataFilePath);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			//dataarray[i] = new MyStringDataObject(line &);
			i++;
		}
		myfile.close();

		//return (IDataObject*)dataarray;
		//return (MyStringDataObject*)dataarray;
		return dataarray;
	}
	else
	{
		cout << "Unable to open file";
		return nullptr;
	}
}
	*/
