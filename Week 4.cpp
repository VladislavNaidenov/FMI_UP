// Week 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])

//1

{
int num;
cin >> num;
while (num<5 || num>20)
{
cout << "Enter a number between 5 and 20: ";
cin >> num;
}
switch (num % 2)
{
case 0: cout << "Even" << endl; break;
case 1: cout << "Odd" << endl; break;
default:break;
}
return 0;
}

//2

{
int a, b, c;
cin >> a >> b >> c;
if (a + b > c && a + c > b && b + c > a)
{
cout << "Syshtestvuva takyv triygylnik i toi e ";
if (a == b && b == c)
cout << "ravnostranen." << endl;
else if (a == b || b == c || a == c)
cout << "ravnobedren." << endl;
else
cout << "raznostranen." << endl;
}
else
cout << "Ne syshtestvuva takyv triygylnik." << endl;
return 0;
}

//3

{
int num;
cin >> num;
int a = num / 100;
int b = num / 10 % 10;
int c = num % 10;
if (a*b*c < 100)
cout << "No " <<a*b*c<< endl;
else
{
cout << "Yes " << a*b*c - (a + b + c) << endl;
}
return 0;
}

//4

{
int n;
cin >> n;
int num;
int biggestnegative=0;
for (int i = 0; i < n; i++)
{
cin >> num;
if (num < 0 && biggestnegative == 0)
biggestnegative = num;
if (num<0 && num>biggestnegative)
biggestnegative = num;
}
if (biggestnegative == 0)
cout << "No negative numbers" << endl;
else
cout << "Biggest negative number is " << biggestnegative << endl;
return 0;
}

//5

{
int n;
cin >> n;
int fact = 0;
for (int i = n; i > 0; i--)
{
cout << i;
if (i > 1)
cout << " + ";
fact += i;
}
cout <<" = " <<fact << endl;
return 0;
}

//6

{
int n;
cin >> n;
int ai;
for (int i = 1; i <= n; i++)
{
ai = (i*i) + 3 * i;
cout << "a" << i << " = " << ai << endl;;
}
return 0;
}

//7

{
	int n;
	cin >> n;
	char a, b;
	cin >> a >> b;
	for (int i = 1; i <= n-1; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << a;
		for (int k = n; k > i; k--)
			cout << b;
		cout << endl;
	}
	return 0;
}

//bonus

{
	int n;
	cin >> n;
	int f1 = 0, f2 = 1, f;
	for (int i = 1; i < n; i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	cout << f2 << endl;
	return 0;
}