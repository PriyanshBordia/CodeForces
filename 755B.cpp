#include <iostream>
#include <cstring>
#include <set>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	string p[n];
	string e[m];

	for (int i = 0; i < n; i++){ cin >> p[i]; }

	for (int i = 0; i < m; ++i){ cin >> e[i]; }


	sort(p, p + n);
	sort(e, e + m);

	set<string> v;

	iterator diff = set_difference(p, p + n, e, e + m, v.begin());
	
	(diff >= 0) ? cout << "YES\n" : cout << "NO\n";

	return 0;
}