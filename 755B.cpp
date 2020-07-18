#include <iostream>
#include <cstring>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	string p[n];
	set<string> e;

	for (int i = 0; i < n; i++){ string s; cin >> s; p[i] = s; }
	for (int i = 0; i < m; i++){ string t; cin >> t; e.insert(t); }

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (e.find(p[i]) != e.end())
			count++;
	}

	// if (n <= m)
		(count % 2 == 0 && (n - count) < (m - count))? cout << "NO\n" : cout << "YES\n";

	// else
	// 	cout << "YES\n";


	return 0;
}