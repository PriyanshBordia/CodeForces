#include <iostream>
#include <assert.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;

	for (int j = 0; j < t; ++j)
	{
		int moves = 0;
		int a = 0, b = 0;

		int n;
		cin >> n;

		int candy[n];
		for (int i = 0; i < n; i++)
		{
			cin >> candy[i];
		}

		int posA = 0;
		int posB = n - 1;
		int buffA = 0;
		int buffB = 0;

		while (posA <= posB)
		{
			buffA = 0;

			while (buffA <= buffB && posA <= posB)
			{
				buffA += candy[posA++];
			}

			a += buffA;
			moves++;

			if (posA > posB)
				break;

			buffB = 0;

			while (buffB <= buffA && posB >= posA)
			{
				buffB += candy[posB--];
			}

			b += buffB;
			moves++;

			if (posB < posA)
				break;
		}

		cout << moves << " " << " " << a << " " << b << endl;	
	}
		
	return 0;
}