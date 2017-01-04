// HW2, 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void SrednoAritmetichno(double arr1,double arr2, double arr3,int index,int elementi,double &SrAritmetichno)
{
	if (index == 0)
	{
		if (arr2 == arr3)
			SrAritmetichno = index;
	}
	else if (index == elementi - 1)
	{
		if (arr2 == arr1)
			SrAritmetichno = index;
	}
	else
	if (arr2 * 2 == arr1 + arr3)
		SrAritmetichno = index;
}

int _tmain(int argc, _TCHAR* argv[])
{
	const int MaxSize = 20;
	double arr[MaxSize];
	int elementi;
	cin >> elementi;
	for (int i = 0; i < elementi; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	double SrAritmetichno = -1;
	for (int i = 0; i < elementi; i++)
	{
		SrednoAritmetichno(arr[i - 1], arr[i], arr[i + 1],i,elementi, SrAritmetichno);
	}
	if (SrAritmetichno == -1)
		cout << "1" << endl;
	else
	cout << "Index = " << SrAritmetichno << endl;
	return 0;
}

