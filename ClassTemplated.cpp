#include "ClassTemplated.h"

template<class T>
class myClass
{
public:
	myClass(T value)
	{
		this->value = value ;
	}
	void DataTypeSize()
	{
		cout << sizeof(value) << endl;
	}

private:
	T value;
};