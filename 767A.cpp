#include <iostream>

using namespace std;

using namespace std;

int main()
{
	int n;
	cin >> n;

	int j = n;
	
	int a[n + 1] = { 0 };
	for (int i = 0; i < n; ++i)
	{
		long int x;
		cin >> x;

		a[x] = 1;

		while (a[j] == 1)
		{
			cout << j << " ";
			--j;
		}

		cout << endl;
	}

	return 0;
}