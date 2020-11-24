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
#include <assert.h>

using namespace std;

ll isPrime(ll x)
{
	if (x == 2)
		return 1;

	else if (x == 1 || x % 2 == 0)
		return 0;
	
	else
	{
		for (ll i = 3; i <= sqrt(x); i += 2)
		{
			if (x % i == 0)
				return 0;
		}
		
		return 1;
	}
}


void solve()
{
	vector<ll> v;

	ll ans(0);
	ll n, k(0); cin >> n;

	// ll div[n + 1];
	
	if (isPrime(n))
	{
		cout << "1\n" << n << endl;
	}

	else
	{
		int t = 0;
		ll temp = n, i = 2;
		while (i < sqrt(temp) && temp > 1)
		{
			while (temp % (i * i) == 0)
			{				
				// cout << i << " ";
				if (v.size() == 0)
				{
					assert (i != 0);
					temp /= i;
					v.pb(i);
					k++;

					t += (to_string(i)).size();
				}

				else if (v.size() > 0 && (i % v[v.size() - 1] == 0))
				{
					assert (i != 0);

					temp /= i;
					v.pb(i);
					k++;

					t += (to_string(i)).size();
				}

				else
					break;
			}

			i++;
		}

		v.pb(temp);
		t += to_string(temp).size();
		k++;

		if (t < k)
		{
			cout << k << endl;

			for (int i = 0; i < v.size(); i++)
				cout << v[i] << " ";
		}
		else
		{
			cout << "1\n" << n;
		}

		cout << endl;
	}

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}