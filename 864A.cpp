#include <iostream>
#include <map>
#include <set>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

int main()
{
	int n; cin >> n;

	map<int, int> m;
	for (int i = 0; i < n; i++)
	{ 
		int x; cin >> x;

		m[x] += 1; 
	}

	set<int> s;
	for (auto it = m.begin(); it != m.end(); it++)
			s.insert(it->second);

	if (m.size() == 2 && s.size() == 1) 
	{
		yes;
		for (auto it = m.begin(); it != m.end(); it++)
			cout << it->first << " ";

		cout << endl;
	}

	else
		no;

	return 0;
}
