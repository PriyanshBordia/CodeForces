#include <iostream>
#include <numeric>

using namespace std;

int main()
{
	int n; cin >> n;

	int pos[n + 1];

	int even(0), odd(0);

	int a[n + 1] = { 0 };
	for (int i = 0; i < n / 2; i++)
	{
		int x; cin >> x;

		a[x] = 1;

		(x & 1) ? odd++ : even++; 
	}


	int i = 1;
	while (i < n)	
	{
		if (a[i] == 1)
		{

		}

		else
			i--;
	}

	return 0;
}