#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
#include <stdlib.h>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb(x) push_back(x)

using namespace std;

void solve()
{
	vector<ll> v;	set<ll> st;	map<ll, ll> mp;
	
	ll ans(0), sum1(0), sum2(0), cnt[1001], mx(1), mn(1000000000);
	
	for (int i = 0; i < 1001; ++i)
		cnt[i] = 0;

	ll n; cin >> n;

	ll t[201]; for (int i = 0; i <= 200; ++i) t[i] = 0;

	for (int i = 1; i <= n; i++) 
	{
		int x; cin >> x;
		t[x]++;
	}

	while (mx)
	{
		mx = 0;
		for (int i = 1; i <= 200; i++)
		{
			if (t[i] > 0)
			{
				t[i]--;

				if (cnt[t[i]] != 0)
				{	
					for (int j = t[i] - 1; j > 0; j--)
					{
						if (cnt[j] == 0)
						{
							sum1 = j; 
							break;
						}
					}

					for (int k = t[i] + 1; k < 1000; k++)
					{
						if (cnt[k] == 0)
						{
							sum2 = k;
							break;
						}
					}

					if ((t[i] - sum1) <= (sum2 - t[i]) && sum1 > 0 && sum2 > 0)
					{
						ans += t[i] - sum1;
						cnt[sum1] = 1;
					}

					else if ((t[i] - sum1) > (sum2 - t[i]) && sum1 > 0 && sum2 > 0)
					{
						ans += sum2 - t[i];
						cnt[sum2] = 1;
					}

					else if (sum1 > 0)
					{
						ans += t[i] - sum1;
						cnt[sum1] = 1;
					}

					else if (sum2 > 0)
					{
						ans += sum2 - t[i];
						cnt[sum2] = 1;
					}
				} 

				else
					cnt[t[i]] = 1;

				for (int k = 1; k < 10; k++)
					cout << cnt[k] << " ";

				cout << endl;

				sum1 = sum2 = -1;
				
				mx++;
			}
		}
	}
		
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