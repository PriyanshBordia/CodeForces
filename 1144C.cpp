#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	int n; cin >> n;

	set<int> asc;
	set<int> desc;

	int a[n]; 
	for (int i = 0; i < n; i++) 
	{ 
		int x; cin >> x; 

		(asc.find(x) == asc.end()) ? asc.insert(x) : desc.insert(x); 
	}

	if (asc.size() + desc.size() < n)
		no;

	else
	{
		yes;

		int k = asc.size(), l = desc.size();

		cout << k << endl;

		for (auto it = asc.begin(); it != asc.end(); it++)
			cout << *it << " ";

		cout << endl << l << endl;

		vector<int> v;

		for (auto it = desc.begin(); it != desc.end(); it++)
			v.push_back(*it);

		sort(v.rbegin(), v.rend());

		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		
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
