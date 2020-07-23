#include <iostream>
#include <cstring>
#include <set>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	set<string> diff;

	for (int i = 0; i < n + m; i++){ string s; cin >> s; diff.insert(s); }

	if (n > m)
		yes;

	else if (n == m)
		(diff.size() % 2 == 1) ? yes : no;

	else 
		no;

	return 0;
}