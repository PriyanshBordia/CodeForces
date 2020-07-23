#include <iostream>
#include <math.h>
#include <algorithm>
typedef long long ll;
#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);
using namespace std;

int main()
{
	ll t;
	scll(t);
	
	while (t--)
	{
		ll n;
		scll(n)

		ll k(0);

		ll a[n];
		for (int i = 0; i < n; i++){ scll(a[i]); if(a[i] == 1) k++; }

		if (k == n)
			(n & 1) ? cout << "First\n" : cout << "Second\n";

		else
		{
			k = 0; 
			for (int i = 0; i < n; i++)
			{
				if (a[i] != 1)
					break;

				k++;
			}

			(k % 2 == 0) ? cout << "First\n" : cout << "Second\n";
		}
	}	

	return 0;
}
