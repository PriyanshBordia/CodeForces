#include <iostream>

using namespace std;

int main()
{
	int m;
	cin >> m;

	int max = 0;
	int count = 0;

	int buff[5001] = { 0 };
	for (int i = 0; i < m; i++)
	{ 
		int x = 0;	
		cin >> x;

		if (x > max)
		 	max = x;
		
		buff[x] += 1;
	}

	for (int i = 1; i < 5001; ++i)
	{
		if (buff[i] > 2 && i != max)
			count += buff[i] - 2;
	}

	cout << m - count - buff[max] + 1 << endl;

	buff[max] = 1;

	for (int i = 1; i <= 5000; ++i)
	{
		if (buff[i] > 0)
		{
			cout << i << " ";
			buff[i]--;
		}
	}

	for (int i = 5000; i > 0; i--)
	{
		if (buff[i] > 0)
		{
			cout << i << " ";
			buff[i]--;
		}
	}
		
	cout << endl;

	return 0;
}