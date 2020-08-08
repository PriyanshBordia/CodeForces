#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n; cin >> n;

	vector<int> v(n, 0); for (int i = 0; i < n; i++) cin >> v[i];

	if (n & 1)
		sort(v.begin(), v.end());

	else
		sort(v.rbegin(), v.rend());

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}