#include <iostream>
#include <math.h>

using namespace std;

int isPrime(int a)
{
	if (a == 2)
		return 1;
	
	else if (a % 2 == 0) 
		return 0;

	for (int i = 3; i <= sqrt(a); i += 2)
	{
		if (a % i == 0)
			return 0;
	}

	return 1;
}
int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= 1000; i++)
	{	
		if (!isPrime(i * n + 1))
		{
			cout << i << endl;
			break;
		}
	}

	return 0;
}