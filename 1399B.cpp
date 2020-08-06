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
	ll n; cin >> n;

	ll mnB(1e09), mnA(1e09);

	ll a[n]; 
	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];

		if (a[i] < mnA)
			mnA = a[i];
	}

	ll b[n]; 
	for (int i = 0; i < n; i++) 
	{
		cin >> b[i];

		mnB = min(mnB, b[i]); 
	}

	ll moves(0);
	for (int i = 0; i < n; ++i)
	{
		moves += max(b[i] - mnB, a[i] - mnA);
	}
	
		cout << moves<<endl;
	return;
}

int main()
{
	ll t; scll(t);
	
	while (t--)
		solve();

	return 0;
}
