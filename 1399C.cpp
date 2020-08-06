#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
// #include <bits/stdc++.h>

typedef long l;
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	int n; cin >> n;
	
	int mono[51] = { 0 };
	
	int w[n]; 
	for (ll i = 0; i < n; i++)
	{ 
		cin >> w[i]; 
		mono[w[i]]++;
	}

	int ans1(0);
	for (int i = 0; i < 51; i++)
	{
		ans1 = max(ans1, mono[i] / 2);
	}

	sort(w, w + n);

	map<int, int> m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			m[w[i] + w[j]]++; 
		}
	}

	int mx(0), ans2(0);
	for (auto it = m.begin(); it != m.end(); it++)
	{
	// 	if (it->second > mx)
	// 	{
			cout << it->second << "  " << it->first << endl;
		// }
	}

cout<<endl;
	// cout << max(mx, max(ans1, ans3)) << endl;

	return;
}

int main()
{
	ll t; scll(t);
	
	while (t--)
		solve();

	return 0;
}
