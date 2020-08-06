#include <iostream>
#include <algorithm>

typedef long long ll;

using namespace std;

void solve()
{
	ll n; cin >> n;

	ll p[n], odd1(0), even1(0);
	for (int i = 0; i < n; i++)
	{ 
		cin >> p[i]; 

		(p[i] & 1) ? odd1++ : even1++;
	}

	ll m; cin >> m;

	ll q[m], odd2(0), even2(0);
	for (int j = 0; j < m; j++)
	{ 
		cin >> q[j]; 
		
		(q[j] & 1) ? odd2++ : even2++;
	}

	ll cnt = odd1 * odd2 + even1 * even2;

	cout << cnt << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
	{
		solve();	
	}

	return 0;
}