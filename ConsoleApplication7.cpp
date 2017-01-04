// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int CheckStepen(int &arr, int *PosledenElementStepen)
{
	int i = arr;
	bool flag = true;
	do
	{
		if (i % 2 != 0)
		{
			flag = false;
			return *PosledenElementStepen;
			break;
		}
		i /= 2;
	} while (i > 1);
	if (flag == true)
	{
		*PosledenElementStepen = arr;
		return *PosledenElementStepen;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	const int MaxSize = 15;
	int arr[MaxSize];
	int n;
	cin >> n;
	while (n > 10)
		cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int *PosledenElementStepen = NULL;
	for (int i = 0; i < n; i++)
	{
		CheckStepen(arr[i], PosledenElementStepen);
	}
	cout << &PosledenElementStepen << endl;
	return 0;
}

