// Week 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int _tmain(int argc, _TCHAR* argv[])

//1

{
int n;
cin >> n;
int sum = 0;
for (int i = 1; i <= n; i++)
{
sum += i;
cout << i;
if (i < n)
cout << " + ";
}
cout << " = " << sum << endl;
return 0;
}

//2

{
int a, b;
cin >> a >> b;
int sum = 1;
for (int i = a; i <= b; i++)
{
sum *= i;
}
cout << sum << endl;
return 0;
}

//3

{
int a;
cin >> a;
while (a<0 || a>10)
{
cout << "Enter a number between 0 and 10."<< endl;
cin >> a;
}
for (int i = a; i <= 100; i++)
{
if (i % 2 == 0 && i % 3 == 0)
cout << i << " ";
}
return 0;
}

//4

{
	int num;
	cin >> num;
	bool prime = true;
	if (num <= 1)
		prime = false;
	else
	for (int i = 2; i < num && prime; i++)
	{
		if (num % i == 0)
			prime = false;
	}
	cout << (prime ? "Prime" : "Not prime") << endl;
	return 0;
}

//5

{
int p, q;
cin >> p >> q;
while (p > q)
{
cout << "Enter p<q" << endl;
cin >> p >> q;
}
for (int a = p; a <= q; a++)
{
bool prime = true;
for (int i = 2; i < a && prime; i++)
{
if (a%i == 0)
prime = false;
}
if (prime)
cout << a << " ";
}
return 0;
}

//6

{
	int n;
	cin >> n;
	int num = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << num << " ";
			num++;
		}
		cout << endl;
	}
	return 0;
}