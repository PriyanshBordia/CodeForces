#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	int n; cin >> n;

	int mx(0);

	map<int, int> m;

	int l[1000005] = { 0 }, r[1000005] = { 0 };
 
	for (int i = 1; i <= n; i++) 
	{
		int x; cin >> x;

		if (l[x] == 0)
			l[x] = i;

		m[x]++;
		r[x] = i;

		mx = max(m[x], mx);
	}

 	int j(0), k(0), mn = 1000005;
	for (int i = 1; i < 1000005; i++)
	{
		if ((r[i] - l[i]) < mn && r[i] != 0 && m[i] == mx)
		{
			mn = r[i] - l[i];
			j = l[i];
			k = r[i]; 
		}
	}

	cout << j << " " << k << endl;

	return 0;
}