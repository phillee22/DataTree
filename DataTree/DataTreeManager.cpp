//
//
//

#include "DataTreeManager.h"

using namespace std;

DataTreeManager::DataTreeManager(string datafilename)
{
	//DataFileParser dfp;
	//MyStringDataObject* dataarray = dfp.GetFileData(Filepath);
}

bool DataTreeManager::Insert(MyStringDataObject* msdo)
{
	if (0 == _tree)
	{
		_tree = new DataContent();
	}

	

	return false;
}

/*
DataTreeManager::~DataTreeManager()
{
	free(_tree);
}
*/