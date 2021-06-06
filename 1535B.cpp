#include <iostream>
#include <cstring>
#include <math.h>
#include <numeric>
#include <algorithm>
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
	int ans(0), sum(0), cnt(0);
	
	int n; cin >> n;

	vector<int> v;	
	vector<int> o;
	for (int i = 0; i < n; i++) 
	{
		cin >> ans;
		if (ans & 1)
			o.push_back(ans);
		else
			v.push_back(ans);
	}

	v.insert(v.end(), o.begin(), o.end());

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] % 2 == 0)
			cnt += (n - i - 1);
		// cout << cnt << endl;
	}
	
	sort(o.begin(), o.end());

	for (int i = 0; i < o.size(); i++)
	{
		// cout << o[i] << " ";
		int j = i - 1;
		while (j >= 0 && o[i] == o[j--] && o[i] != 1)
			cnt++;
	}

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