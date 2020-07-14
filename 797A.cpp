#include <iostream>

using namespace std;

int stack[20];
int top = 0;

int main()
{
	int k, n;
	cin >> n >> k;

	int temp = n;

	while (k--)
	{
		for (int i = 2; i < n; i++)
		{
			if (isPrime(i))
			{
				if (temp % i == 0)
				{
					temp /= i;
					stack[top+] = i; 
				}
			}
		}
	}

	return 0;
}
