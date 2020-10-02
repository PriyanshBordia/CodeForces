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
	ll n; cin >> n;

	ll a[n];
	ll ans(0), cnt[101], mx(0), z(0);


	for (int i = 0; i < 101; i++)
		cnt[i] = 0;

	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];

		cnt[a[i]]++;
	}

	sort(a, a + n);

	for (int i = 0; i < 101; i++)
	{		
		if (cnt[i] == 0)
		{
			z = i;
			break;
		}
	}

		
	ll flag(0);

	int i = 0; 
	while (i < 101)	
	{
		if (cnt[i] == 1 && flag == 1);

		else if (cnt[i] == 1 && flag == 0)
		{
			mx += i; flag = 1;
		}

		else if (cnt[i] == 0 && flag == 1)
		{
			mx += i;
			break;
		}

		else if (cnt[i] == 0 && flag == 0)
		{
			mx += 2 * i;
			break;
		}

		i++;
	}


	ans = max(z, mx);

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