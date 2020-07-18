#include <iostream>
#include <math.h>

using namespace std;


int isPrime(int x)
{
	if (x == 2)
		return 1;

	else if (x == 1 || x % 2 == 0)
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

int main()
{
	int n, k;
	cin >> n >> k;

	int count = 0;
	int prev = 2;

	for (int i = 2; i <= n; i++)
	{
		if (isPrime(i))
		{
			if ((prev + i) <= (n - 1) && isPrime(prev + i + 1))
				count++;
			
			prev = i;
		}
	}

	(count >= k) ? cout << "YES\n" : cout << "NO\n";

	return 0;
}