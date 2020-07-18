#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>

using namespace std;

int main()
{
	int t = 0;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		int count = n;
		
		int j = n - 1; 
		while(a[j] <= a[j - 1] && j > 0)
			j--;
	

		while (a[j] >= a[j - 1] && j > 0)
			j--;
	
	
		cout << j << endl;
	}
	
	return 0;
}
