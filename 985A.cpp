#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int even = 0;
	int odd = 0;

	int a[n + 1] = { 0 };
	for (int i = 0; i < n / 2; i++)
	{
		int x;
		cin >> x;

		a[x] = 1;

		(x & 1) ? odd++ : even++; 
	}

	int i = n;
	while (i > 0)	
	{
		if (a[i] == 1)
		{

		}

		else
			i--;
	}

	return 0;
}