#include <iostream>
#include <time.h>

using namespace std;

int isDivisible(int x, int y)
{
	if (x % y == 0)
		return 1;

	else
		return 0;
}

int main(int argc, char const *argv[])
{
	clock_t start = clock();

	int t;
	cin >> t;

	for (int j = 0; j < t; ++j)
	{
		int n, k;
		cin >> n >> k;
	
		int count = n * (k / (n - 1));

		if (k % n != 0)
		{
			int temp = (k - ((n - 1) * (k / (n - 1))));

			if (temp / n == 0)
				count += temp;

			else
			{
				count += 
			}
		}

		else
		{
			count = n * (k / (n - 1)) - 1;
		}

		cout << count << endl;
	}
	
	clock_t end = clock();

	cout << (double(end - start)) / CLOCKS_PER_SEC << endl;
	return 0;
}