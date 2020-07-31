#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")

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
	ll n; scll(n);

	if (n == 36)
	{
		yes;
		cout << "6 5 10 15\n";
	}

	else if (n == 40)
	{
		yes;
		cout << "14 15 10 1\n";
	}

	else if (n == 44)
	{
		yes;
		cout << "6 7 10 21\n";
	}

	else if (n > 30)
	{
		yes;
		cout << "6 10 14 " << n - 30 << endl;
	}

	else 
		no;

	return;
}

int main()
{
	ll t; scll(t);
	
	while (t--)
	{
		solve();
	}	

	return 0;
}