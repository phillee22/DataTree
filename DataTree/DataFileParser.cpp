//
//
//
#include "DataFileParser.h"


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
		return 0;
	}
}
*/
