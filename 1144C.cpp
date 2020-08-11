#include <iostream>
#include <algorithm>
#include <vector>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	int n; cin >> n;

	vector< pair<int, int> > m;

	int a[n]; 
	for (int i = 0; i < n; i++) 
	{ 
		int cin >> a[i]; 

		m[a[i]]++; 
	}

	if (2 * (m.size()) < n)
		no;

	else
	{
		yes;
		sort (m.begin(), m.end(), greater<>());

		int k = m.size(), l = n - m.size();

		cout << k << endl;

		for (auto it = m.begin(); it != m.end(); it++)
		{
			if (it->second >= 2)
			{
				cout << it->first << " ";
				it->second--;
			}
		}

		cout << endl << l << endl;

		for (auto it = m.begin(); it != m.end(); it++)
		{
			if (it->second >= 1)
			{
				cout << it->first << " ";
				it->second--;
			}
		}
		
		cout << endl;
	}

	return;
}

int main()
{
	int t = 1; //cin >> t;

	while (t--)
		solve();
	
	return 0;
}
