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
	vector<int> v01;
	vector<int> v10;

	ll ans(0), cnt(0), mx(0), mn(100000000);

	ll cnt1(0), cnt0(0);

	ll n; cin >> n;

	ll a[n + 1];
	for (int i = 1; i <= n; i++) 
	{
		cin >> a[i];

		(a[i] == 1) ? cnt1++ : cnt0++;
	}
	
	if (cnt1 > cnt0)
	{
		cnt1 = cnt1 - cnt1 % 2;
		cout << cnt1 << endl;
		
		int i = 1; 
		while (cnt1 > 0 && i <= n)
		{
			if (a[i])
			{
				cout << a[i] << " ";
				cnt1--;
			}
			i++;
		}
	}

	else
	{
		cout << cnt0 << endl;
		for (int i = 1; i <= n; i++)
		{
			if (!a[i])
				cout << a[i] << " ";
		}
	}

	cout << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}