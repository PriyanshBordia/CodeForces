#include <iostream>
#include <cstring>
#include <math.h>
#include <numeric>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
typedef long long ll;
#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);
#define yes printf("YES\n");
#define no printf("NO\n");

using namespace std;

int main()
{
	ll t;
	scll(t);
	
	while (t--)
	{
		ll n;
		scll(n)

		ll a[n];
		for (int i = 0; i < n; i++){ scll(a[i]); }

		if (a[0] != 0)
		{
			string s(a[0], 'a');
			cout << s << endl;
		}

		else
			cout << 'b' << endl;

		for (int i = 0; i < n - 1; ++i)
		{
			if (a[i] != 0)
			{
				string t(max(a[i], a[i + 1]), 'a');
				cout << t << endl;
			}

			else
				cout << (char)(('c' - 'a' + i) % 26 + 'a') << endl;
		}	

		if (a[0] != 0)
		{
			string r(a[n - 1], 'a');
			cout << r << endl;
		}

		else
			cout << 'z' << endl;
	}	

	return 0;
}
