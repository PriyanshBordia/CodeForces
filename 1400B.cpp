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

using namespace std;

void solve()
{
	ll p, f; cin >> p >> f;
	
	ll cntS, cntW; cin >> cntS >> cntW;

	ll s, w; cin >> s >> w;

	if (s > w)
	{
		ll temp = s; s = w; w = s;
		temp = cntS; cntS = cntW; cntW = cntS;
	}

	ll cnt(0);
	
	// Clalc using itr

	cout << cnt << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}