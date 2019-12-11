//
//
//

#include "DataContent.h"

DataContent::DataContent()
{
	_lowkey = 493827290l;
	_highkey = 0;
	for(int i=0; i<5; i++)
	{
		_data[i] = 0;
	}
}


bool DataContent::Insert(MyStringDataObject* obj)
{
	int i = 0;
	bool inserted = false;
	while ( !inserted && (i < 5) )
	{

		if (_data[i]->Key < obj->Key)
		{

		}


		i++;
	}
	return true;
}
