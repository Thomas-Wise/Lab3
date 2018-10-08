// lab3-twise3.cpp
// Thomas Wise
// Lab 03
// 8 Oct 2018

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void sum();
void product();
void f();

int main()
{
	sum();
	product();
	f();
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	return 0;
}

void sum()
{
	short int SENTINEL = -9999;
	short int n = 0;
	short int sum = 0;

	while (n != SENTINEL)
	{

		cout << "Please enter a positive integer for n (" << SENTINEL << " to end):" << endl;
		cin >> n;
		if (n > 0)
		{
			for (int i = 1; i <= n; i++)
			{
				sum += i;
			}
			cout << "The sum is: " << sum << endl << endl;
		}
		sum = 0;
	}
}

void product()
{
	long int n = 0;
	double product = 1;
	long int SENTINEL = -9999;
	
	while (n != SENTINEL)
	{
		cout << "Please enter a positive integer for n (" << SENTINEL << " to end):" << endl;
		cin >> n;
		if (n > 0)
		{
			for (long int i = 1; i <= n; i++)
			{
				product *= i;
			}
			cout << "The product is " << product << endl << endl;
		}
		product = 1;
	}
}

void f()
{
	float fraction = 0;
	float answer = 0;
	int n = 0;
	int SENTINEL = -9999;

	while (n != SENTINEL)
	{

		cout << "Please enter an integer for n (" << SENTINEL << " to end):" << endl;
		cin >> n;
		if (n != SENTINEL)
		{
			fraction = 1.0 / n;
			for (int i = 0; i < n; i++)
			{
				answer += fraction;
			}
			cout << "Fraction is: " << fraction << endl;
			cout << "(n * (1/n)) = " << answer << endl << endl;
		}
		answer = 0;
	}
}