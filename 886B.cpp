#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int k = 200001;
	int a[k];

	for (int i = 0; i <= k; i++)
		a[i] = -1;

	for (int i = 1; i <= n; i++)
	{ 
		int x;
		cin >> x;

		a[x] = i;
	}

	int ans = 0;
	int min = k;

	for (int i = 0; i <= k; i++)
	{
		if (a[i] != -1 && a[i] < min)
		{	
			min = a[i];
			ans = i;
		}
	}

	cout << ans << endl;

	return 0;
}