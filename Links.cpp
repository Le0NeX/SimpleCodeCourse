#include "Links.h"
#include "FileBasic.h"

void vLink()
{
	int nNumber = 10;
	int* pnNumber = &nNumber;//Create pointer a variable
	int& nNumberLink = nNumber;//Create link a variable

	cout << "nNumber:\t" << nNumber << endl;
	cout << "*pnNumber pointer:\t" << (* pnNumber) << endl;
	cout << "&nNumberLink\t" << nNumberLink << endl;
	cout << "*pnNumber pointer a before:\t" << pnNumber << endl;//
	pnNumber++; //shift value variable int 4 bytes
	cout << "*pnNumber pointer a after:\t" << pnNumber << endl;//

	int *pnNumberOne = &nNumber;
	int &nNumberLinkOne = *pnNumberOne;
	int *pnNumberTwo = &nNumberLinkOne;
	int &nNumberLinkTwo = *pnNumberTwo;
	int *pnNumberThree = &nNumberLinkTwo;
	*pnNumberThree = 15;
	cout << "nNumber change after:\t" << nNumber << endl;//output 15;
}

/* Transmission a parametrs in function */
void vStorageAvalue()
{
	int nValue = 5;
	cout << "value:\t" << nValue << endl;
	vRecevingAparametrsInFunctionOne(nValue);
	cout << "Normal a value:\t" << nValue << endl;//5
	vRecevingAparametrsInFunctionTwo(nValue);
	cout << "Link a value:\t" << nValue << endl;//2
	vRecevingAparametrsInFunctionThree(&nValue);
	cout << "Pointer a value:\t" << nValue << endl;//3
}

void vRecevingAparametrsInFunctionOne(int inputValue)//Normal a parametr
{
	inputValue++;
}
void vRecevingAparametrsInFunctionTwo(int &inputValue)//Receving a link in parametr
{
	inputValue = 2;
}
void vRecevingAparametrsInFunctionThree(int *inputValue)//Receving a pointer in parametr 
{
	*inputValue = 3;
}
/* Transmission a parametrs in function */