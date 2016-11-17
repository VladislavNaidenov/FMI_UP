// Week07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main()
/*{
	int n;
	int arr[MAX_SIZE];
	cin >> n;
	for (int index = 0; index < n; index++)
	{
		cin >> arr[index];
	}
	int min, max;
	min = arr[0];
	max = min;
	for (int index = 1; index < n; index++)
	{
		if (min > arr[index]) {
			min = arr[index];
		}
		if (max < arr[index]) {
			max = arr[index];
		}
	}
	cout << "min = " << min << "\nmax = " << max << endl;
	return 0;
}*/

/*{
	int n;
	int arr[MAX_SIZE];
	cout << "n = ";
	cin >> n;
	for (int index = 0; index < n; index++)
	{
		cout << "arr[" << index << "] = ";
		cin >> arr[index];
	}
	int min, max;
	min = arr[0];
	max = min;
	for (int index = 1; index < n; index++)
	{
		if (min > arr[index]) {
			min = arr[index];
		}
		if (max < arr[index]) {
			max = arr[index];
		}
	}
	int cont = min;
	min = max;
	max = cont;
	cout << "min = " << min << "\nmax = " << max << endl;
	return 0;
}*/

/*{
	int n;
	int arr[MAX_SIZE];
	cout << "n = ";
	cin >> n;
	int counter = 0;
	for (int index = 0; index < n; index++)
	{
		cout << "arr[" << index << "] = ";
		cin >> arr[index];
		int sum = 0;
		int digit = 0;
		while (arr[index] > 0)
		{
			digit = arr[index] % 10;
			sum += digit;
			arr[index] /= 10;
		}
		if (sum > 0 && sum < 10)
			counter++;
	}
	if (counter == 0)
		cout << "Nqma sbor ot cifri koito sa ednocifreno chislo" << endl;
	else
		cout <<"Broj sbor ot cifri koito sa ednocifreno chislo e " <<counter << endl;
	return 0;
}*/

{
	int n;
	int arr[MAX_SIZE];
	cout << "n = ";
	cin >> n;
	int counter = 0;
	for (int index = 0; index < n; index++)
	{
		cout << "arr[" << index << "] = ";
		cin >> arr[index];
}