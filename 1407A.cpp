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

	int c01(0), c10(0);

	ll ans(0), cnt(0), mx(0), mn(100000000);

	int n; cin >> n;

	int a[n + 1]; for (int i = 1; i <= n; i++) cin >> a[i];
	
	int i = 1, j = 2; 
	while (i < n && j <= n)
	{
		if (a[i] == 0 && a[j] == 1)
		{
			c01++;
			v01.pb(i);
			v01.pb(j);
		}

		else if (a[i] == 1 && a[j] == 0)
		{
			c10++;
			v10.pb(i);
			v10.pb(j);
		}

		i += 2; j += 2;
	}

	if (n == 2)
	{
		if (a[1] != a[2])
		{
			if (a[1] == 1)
				a[1] = -1;
			else
				a[2] = -1;
			cnt = 1;
		}
	}

else
{
	if (v10.size() > v01.size())
	{
		int k = v10.size();
		for (int i = 0; i < v10.size() - 1 && k != v01.size(); i++)
		{
			a[v10[i]] = -1; a[v10[i + 1]] = -1;

			cnt += 2;
			k--;
		}
	}

	else if (v10.size() < v01.size())
	{
		int k = v01.size();
		for (int i = 0; i < v01.size() - 1 && k != v10.size(); i++)
		{
			a[v01[i]] = -1; a[v01[i + 1]] = -1;

			cnt += 2;
			k--;
		}
	}
}

	cout << n - cnt << endl;
		
	for (int i = 1; i <= n; i++)
	{
		if (a[i] !=	-1)
			cout << a[i] << " "; 
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