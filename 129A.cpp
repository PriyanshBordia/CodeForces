#include <iostream>
#include <algorithm>
#include <numeric>
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

	if (accumulate(odd.begin(), odd.end(), 0) & 1)
		cout << odd.size() << endl;

	else 
		cout << even.size() << endl;

	return 0;
}