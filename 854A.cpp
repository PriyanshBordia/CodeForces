#include <iostream>
#include <math.h>

#define sc(x) scanf("%d", &x);

using namespace std;

int isPrime(int x)
{
	if (x == 2)
		return 1;

	else if ((x == 1) || (x % 2) == 0)
		return 0;
	
	else
	{
		for (int i = 3; i <= sqrt(x); i += 2)
		{
			if (x % i == 0)
				return 0;
		}
		
		return 1;
	}
}

int isCoPrime(int x, int y)
{
	if (x == 2)
	{
		if ((y % 2) == 0)
			return 0;
		else
			return 1;
	}

	int min = (x < y) ? x : y;
	for (int i = 2; i <= sqrt(min); i++)
	{
		if ((x % i) == 0 && (y % i) == 0)
			return 0;
	}

	return 1;
}

int main()
{
	int n;
	sc(n);
	
	int a = 1;
	int b = n - 1;
	
	int A = 0;
	int B = 0;
	while (a < b)
	{
		if (isCoPrime(a, b))
		{
			A = a;
			B = b;	
		}
		
		// cout << A << " " << B << endl;
		a++;
		b--;
	}
	
	printf("%d %d\n", A, B);

	return 0;
}