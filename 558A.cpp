#include <iostream>
#include <algorithm>
#include <numeric>
#include <utility>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
	int n; cin >> n;

	vector< pair <int, int> > left;
	vector< pair <int, int> > right;

	for (int i = 0; i < n; i++)
	{ 
		int x, a; cin >> x >> a;

		if (x < 0)
			left.push_back( make_pair(x, a));
		else
			right.push_back( make_pair(x, a));
	}

	sort(left.begin(), left.end(), greater<pair<int, int> >());
	sort(right.begin(), right.end());
	
	// cout << right.size() << " " << left.size() << endl;

	ll ans(0);
	if (left.size() < right.size())
	{
		for (int i = 0; i < left.size(); ++i)
		{
			ans += left[i].second + right[i].second;
		}

		ans += right[left.size()].second;
	}

	else
	{
		for (int i = 0; i < right.size(); ++i)
			ans += left[i].second + right[i].second;

		if (left.size() > right.size())
			ans += left[right.size()].second;
	}

	cout << ans << endl;
	
	return 0;
}