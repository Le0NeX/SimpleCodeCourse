#include "FunctionsTemplate.h"

//Lessons: Functions template
//Can be used typename(c) or class(c++), working eqyally
template <class T>
void Sum(T a)
{
	return a;
}

//template function on the two parameters, and return T1 parameter
template <typename T1, typename T2>
void Sum(T1 a, T2 b)
{
	return a + b;
}

/* Homework:  Swap unknow values */
void vRunSwapUnknowValues()
{
	auto aValueOne = "Hi";
	auto aValueTwo = "Hi-Hi";
	cout << "nNumOne:\t" << aValueOne << endl;
	cout << "nNumTwo:\t" << aValueTwo << endl;
	cout << "==================================" << endl;
	vSwapUnknowValues(aValueOne, aValueTwo);
	cout << "nNumOne:\t" << aValueOne << endl;
	cout << "nNumTwo:\t" << aValueTwo << endl;
}
template<class T1, class T2>
void vSwapUnknowValues(T1& t1Value, T2& t2Value)
{
	auto aUnknowValue = t1Value;
	t1Value = t2Value;
	t2Value = aUnknowValue;
}