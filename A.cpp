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
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1000000000);
	
	ll n; cin >> n;

	cout << n << endl;

	int a[n + 1];
	for (int i = 1; i <= n; i++)
	{
		a[i] = i;
	}

	for (int i = 1; i <= n; i++)
	{

		a[i] = i;
	}
	
	// 1 2 3
	// 2 2 4
	// 4 4 4
	
	// 2
	// 1 2

	// 1 2 3 4 5
	// 2 3 3 5 6
 //    3 4 4 5 7
 //    4 5 4 6 8
 //    5 5 5 7 9
	// 7 7 7 7 11
	// 11 11 11 11 11

	// 6
	// 3 4 3 2 4 5

	// 1 2 3 4
	// 2 3 3 5
 //    3 4 3 6
 //    4 4 4 7
	// 7 7 7 7
	// 4
	// 1 1 1 3 2 
	
	pfll(ans);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}