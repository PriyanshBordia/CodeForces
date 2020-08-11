#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n; cin >> n;

	vector<int> even; 
	vector<int> odd;
	for (int i = 0; i < n; i++) 
	{
		int x; cin >> x;

		(x & 1) ? odd.push_back(x) : even.push_back(x);
	}

	sort (even.begin(), even.end());
	sort (odd.begin(), odd.end());

	int ans(odd[0]);
	
	cout << odd[0] << " ";

	if (odd.size() < even.size())
	for (int i = 1; i < odd.size(); ++i)
	{
		ans = (ans | odd[i]) - odd[i];
		cout << odd[i] << " ";
	}

	for (int i = 0; i < even.size(); ++i)
	{
		ans = (ans | even[i]) - even[i];
		cout << even[i] << " ";
	}

	cout << endl << ans << endl;

	return 0;
}