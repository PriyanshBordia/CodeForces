#include <iostream>
#include <algorithm>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	ll n, k;
	cin >> n >> k;

	ll a[n];
	ll min = 1000000000;
	
	for (int i = 0; i < n; i++) 
	{ 
		cin >> a[i]; 

		if (a[i] < min)
			min = a[i];
	}

	ll count = 0;
	
	for (int i = 0; i < n; i++)
	{			
		if ((a[i] - min ) % k != 0)
		{
			cout << "-1" << endl;
			return 0;
		}
		
		else
			count += (a[i] - min) / k;
	}

	cout << count << endl;

	return 0;
}