#include <iostream>

typedef long long ll;

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

void solve()
{
	ll n, k, z; cin >> n >> k >> z;

	ll max(0), index(0);

	ll a[n];
	for (int i = 0; i < n; i++)
	{ 
		scll(a[i]);
		
		if (i - 1 >= 0 && (a[i] + a[i - 1]) > max && i <= k)
		{
			max = a[i] + a[i - 1];	
			index = i;
		}
	}

	ll sum(a[0]);

	int flag(0);

	int i = 1; 
	while (k > 0)
	{
		sum += a[i]; k--;
		
		if (i - 1 >= 0 && i == index && z > 0 && flag == 0) { z--; i--; flag = 1; }
		
		else { flag = 0; i++; }
	}

	pfll(sum);

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