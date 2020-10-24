#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb(x) push_back(x)

using namespace std;

int isPrime(int x)
{
	if (x == 2)
		return 1;

	else if (x == 1 || x % 2 == 0)
		return 0;
	
	else
	{
		for (int i = 3; i <= sqrt(x); i += 2)
		{
			if (x % i == 0)
				return 0;
		}
		
		return 1;
	}
}

void solve()
{
	ll ans(0), cnt(0), mx(0), mn(1e09);
	
	// vector<ll> v;	set<ll> st;		map<ll, ll> m;

	ll n; cin >> n;

	// ll a[n + 1]; for (ll i = 1; i <= n; i++) cin >> a[i];
	
	if (isPrime(n))
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "1 ";
			}
			cout << endl;
		}

	}
	
	else 
	{
		int k = 0;

		for (k = 0; k <= 100; k++)
		{
			if (isPrime(k + n - 1) && !isPrime(k))
				break;
		}

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == j)
					cout << k << " ";
				else 
					cout << "1 ";
				// else 
				// 	cout << "0 ";
			}
				cout << endl;
		}
	}

	// pfll(ans);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
