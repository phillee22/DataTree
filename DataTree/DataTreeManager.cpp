//
//
//

#include "DataTreeManager.h"

using namespace std;

DataTreeManager::DataTreeManager(string datafilename)
{
	_tree = new DataContent();
	DataFileParser dfp;
//	MyStringDataObject* dataarray = dfp.GetFileData(datafilename);

	string* dataarray = nullptr;
	dfp.GetFileData(&dataarray, datafilename);


	MyStringDataObject* msdo = nullptr;
	int i = 0;
	//while (!(nullptr == (dataarray + i))) {
	//while ( dataarray[i].size) {
	//	msdo = new MyStringDataObject(i, (dataarray + i));
	//	_tree->Insert( msdo );
	//	i++;
	//}
}

bool DataTreeManager::Insert(MyStringDataObject* msdo)
{
	if (nullptr == _tree)
	{
		_tree = new DataContent();
	}

	_tree->Insert(msdo);

	return false;
}


DataTreeManager::~DataTreeManager()
{
	free(_tree);
}
