#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
typedef long long ll;

using namespace std;

void solve()
{
	int r, b, g; cin >> r >> g >> b;

	vector<int> R(r, 0);
	vector<int> B(b, 0);
	vector<int> G(g, 0);

	for (int i = 0; i < r; i++) 
		cin >> R[i];

	for (int i = 0; i < g; i++) 
		cin >> G[i];

	for (int i = 0; i < b; i++) 
		cin >> B[i];


	sort(R.rbegin(), R.rend());
	sort(G.rbegin(), G.rend());
	sort(B.rbegin(), B.rend());

	ll ans(0);

	int x = max(r, max(b, g));

	int i(0), j(0), k(0);
	
	while (i < r && j < b && k < g)
	{
		ll mx = max(R[i] * G[k], max(B[j] * G[k], R[i] * B[j]));

		ans += mx;

		if (g == x)
		{
			if (R[i] * G[k] == mx)
			{
				i++; k++;
			}

			else if (B[j] * G[k] == mx)
			{
				j++; k++;
			}

			else 
			{
				i++; j++;
			}
		}

		else if (b == x)
		{
			if (R[i] * B[j] == mx)
			{
				i++; j++;
			}

			else if (B[j] * G[k] == mx)
			{
				j++; k++;
			}

			else 
			{
				i++; k++;
			}	
		}

		else
		{
			if (R[i] * G[k] == mx)
			{
				i++; k++;
			}

			else if (B[j] * R[i] == mx)
			{
				j++; i++;
			}

			else 
			{
				k++; j++;
			}
		}
	}

	if (i == r)
	{
		while (j < b && k < g)
		{
			ans += B[j] * G[k];
			j++; k++;
		}
	}

	else if (j == b)
	{
		while (i < r && k < g)
		{
			ans += R[i] * G[k];
			i++; k++;
		}
	}

	else if (k == g)
	{
		while (i < r && j < b)
		{
			ans += B[j] * R[i];
			j++; i++;
		}
	}

	cout << ans << endl;

	return;
}

int main()
{
	int t = 1;
	
	while (t--)
		solve();

	return 0;
}