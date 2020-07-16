#include <iostream>
#include <cstring>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	set<string> p;
	set<string> e;

	for (int i = 0; i < n; i++){ string s; cin >> s; p.insert(s); }

	for (int i = 0; i < m; ++i){ string t; cin >> t; e.insert(t); }

	if (n == 1 && m == 1)
	{
		if ((*p.begin()).compare(*e.begin()) == 0)
			cout << "YES\n";
		else
			cout << "NO\n";

		return 0;
	}

	set<string> v;

	set_difference(p, p + n, e, e + m, v.begin());
	
	if (n == m)
		(v.size() >= 0) ? cout << "YES\n" : cout << "NO\n";

	else
		(n > m)? cout << "YES\n" : cout << "NO\n";

	return 0;
}