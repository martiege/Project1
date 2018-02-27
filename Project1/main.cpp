#include <iostream>

using namespace std;

// fancy comment

int max(int a, int b)
{
	if (a > b)
	{
		cout << "A is greater than B" << endl;
		return a;
	}
	else
	{
		cout << "B is greater than or equal to A" << endl;
		return b;
	}
}

int otherFunc() { return 0; }

void func() {}

int fibonacci(int n)
{
	int a = 0;
	int b = 1;
	int temp = 0;
	cout << "Fibonacci numbers" << endl;
	for (int x = 0; x < n + 1; ++x)
	{
		cout << x << " " << b << endl;
		temp = b;
		b += a;
		a = temp;
	}
	cout << "----" << endl;
	return b;
}

int squareNumberSum(int n)
{
	int totalSum = 0;
	for (int i = 0; i < n; ++i)
	{
		totalSum += i * i;
		cout << (i * i) << endl;
	}
	cout << totalSum << endl;
	return totalSum;
}

void triangleNumbersBelow(int n)
{
	int acc = 1;
	int num = 2;
	cout << "Triangle numbers below " << n << ":" << endl;
	while (acc < n)
	{
		cout << acc << endl;
		acc += num;
		num += 1;
	}
	cout << endl;
}

bool isTriangleNumber(int number)
{
	int acc = 1;
	while (number > 0)
	{
		number -= acc;
		acc += 1;
	}
	return (number == 0);
}

bool isPrime(int n)
{
	bool primeness = true;
	for (int j = 2; j < n; ++j)
	{
		if ((n % j) == 0)
		{
			primeness = false;
			break;
		}
	}
	return primeness;
}

void naivePrimeNumberSearch(int n)
{
	for (int number = 2; number < n; ++number)
	{
		if (isPrime(number))
		{
			cout << number << " is a prime. " << endl;
		}
	}
}

int findGreatestDivisor(int n)
{
	//for divisor in range(n-1,0,-1):
	for (int divisor = (n - 1); divisor != 0; --divisor)
	{
		if ((n % divisor) == 0)
		{
			return divisor;
		}
	}
}

int main()
{
	
	cout << "Oppgave a)" << endl;
	cout << max(5, 6) << endl;

	cout << "Oppgave c)" << endl;
	fibonacci(5);

	cout << "Oppgave d)" << endl;
	squareNumberSum(5);

	cout << "Oppgave e)" << endl;
	triangleNumbersBelow(5);

	cout << isTriangleNumber(3) << endl;

	cout << "Oppgave f)" << endl;
	cout << isPrime(13) << endl;

	cout << "Oppgave g)" << endl;
	naivePrimeNumberSearch(20);
	
	cout << "Oppgave h)" << endl;
	cout << findGreatestDivisor(20) << endl;

	return 0;
}