#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int min = 0;
	int a[n];
	for (int i = 0; i < n; i++)
	{ 
		cin >> a[i]; 

		if (k % a[i] == 0)
		{
			if (a[i] > min)
				min = a[i];
		}
	}

	cout << k / min << endl;

	return 0;
}