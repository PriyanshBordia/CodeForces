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

void solve()
{
	ll ans(0), cnt(0), mx(0), mn(1e09);
	
	vector<ll> v;	set<ll> st;		map<ll, ll> m;

	ll n; cin >> n;

	ll a[n + 1]; 
	for (int i = 1; i <= n; i++) 
	{
		cin >> a[i]; 
		if (a[i] == 0) 
			mx++; 
	}

	for(int i = n; i > 0; i--)
	{
		if (a[i] == 1)
			break;
		else
			mx--;
	}

	for (int i = 1; i <= n; i++)
	{
		if (a[i] == 1)
			break;

		else 
			mx--;
	}
	
	pfll(mx);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
