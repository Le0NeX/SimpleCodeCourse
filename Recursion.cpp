#include "Recursion.h"
#include "FileBasic.h"

int nFunctionRecursion(int num)
{
	/* Condition way out recursion */
	if (num < 1)
	{
		return 0;
	}
	else
	{
		num--;
		cout << "vFunctionRecersion: " << num << endl;
	}
	/* Condition way out recursion */

	return nFunctionRecursion(num);
}
//Factorial payment
int nFactorialCalculation(int N)
{
	if (N == 1)
	{
		return 1;
	}
	else if (N == 0)
	{
		return 0;
	}
	return N * nFactorialCalculation(N - 1);
}