// HW2 , 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void compare(int &arr1, int &arr2, int &arr3)
{
	if (arr1 > arr2)
		arr3 = arr1;
	else if (arr1 < arr2)
		arr3 = arr2;
	else
		arr3 = arr1;
}

int _tmain(int argc, _TCHAR* argv[])
{
	const int elementi = 4;
	int arr1[elementi];
	int arr2[elementi];
	int arr3[elementi];
	for (int i = 0; i < elementi; i++)
	{
		cout << "arr1[" << i << "] = ";
		cin >> arr1[i];
		cout << "arr2[" << i << "] = ";
		cin >> arr2[i];
		compare(arr1[i], arr2[i], arr3[i]);
	}
	for (int i = 0; i < elementi; i++)
		cout << "arr3[" << i << "] = " << arr3[i] << endl;
	return 0;
}

