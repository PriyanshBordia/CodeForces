#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int cnt[1000] = { 0 }; 
	int a[n];
	
	for (int i = 0; i < n; i++)
	{ 
		cin >> a[i]; 

		cnt[a[i] - 1]++;
	}

	int max = (n + 1) / 2;
	
	for (int i = 0; i < 1000; i++)
	{
		if (cnt[i] > max)
		{
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

	return 0;
}