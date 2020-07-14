#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	int t;	
	cin >> t;

	while (t--)
	{
		ll n;
		cin >> n;

		ll a = pow(2, n);
		ll b = pow(2, n - 1);

	
		for (int i = 1; i < n / 2; i++) 
		{
			a += pow(2, i);
			b += pow(2, n - i - 1);
		}

		cout << (a - b) << endl;
	}

	return 0;
}