//
//
//
#include "DataContent.h"

using namespace std;

DataContent::DataContent()
{
	_Init();
}


DataContent::DataContent(MyStringDataObject* newobj)
{
	_Init();
	_data[0] = newobj;
}

// simply conjoins the constructors...
void DataContent::_Init()
{
	_lowkey = 493827290l;
	_highkey = 0;
	for(int i=0; i<SIZE; i++)
	{
		_childcontent[i] = nullptr;
		_data[i] = nullptr;
	}
}

//
//  the idea is that either _data is pointing to data or the _childcontent is pointing
//  to a child (with data) or both are null.  however, both are never pointing to something...
//
void DataContent::Insert(MyStringDataObject* newobj)
{
	int i = 0;
	bool inserted = false;
	while ( !inserted && (i < SIZE) )
	{
		// find an empty slot - take it...
		if (nullptr == _childcontent[i])
		{
			if (nullptr == _data[i])
			{
				_data[i] = newobj;
				inserted = true;
			}
			else if (_data[i]->Key <= newobj->Key)
			{
				i++;
			}
			else // new key < data->key -- swap in the new one and re-insert the existing one...
			{
				MyStringDataObject* temp = _data[i];
				_data[i] = newobj;
				Insert(temp);
			}
		}
		else
		{
			// insert on that child...
			_childcontent[i]->Insert(newobj);
			inserted = true;
		}
	}

	// what if we're off the end and no good spot?
	if (!inserted)  // or i >= SIZE ???
	{
		_Refactor();
		Insert(newobj);
	}
}

//
//  Split the current Content obj.  REplace the SIZE data objs with SIZE child objs, and 
//  put one data obj on each new child...
//
void DataContent::_Refactor()
{
	for(int i=0; i<SIZE; i++)
	{
		*(_childcontent+i) = new DataContent(_data[i]);
		_data[i] = nullptr;

		// how to set the high and low keys???

	}
}