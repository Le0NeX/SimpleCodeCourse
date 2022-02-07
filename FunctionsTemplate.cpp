#include "FunctionsTemplate.h"

//Lessons: Functions template
//Can be used typename(c) or class(c++), working eqyally
template <class T> T Sum(T a, T b)
{
	return a + b;
}

//template function on the two parameters, and return T1 parameter
template <typename T1, typename T2> T1 Sum(T1 a, T2 b)
{
	return a + b;
}

//Lessons: Functions inline
//p.s. Places inline functions in main (working no always).
inline int vFunctionInline(int a, int b)
{
	return a + b;
}