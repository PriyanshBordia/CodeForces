#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
	int n; cin >> n;

	vector<int> even1;
	vector<int> odd1;


	for (int i = 0; i < n; i++)
	{ 
		int x;
		cin >> x; 

		if (x & 1)
			odd1.push_back(x);		

		else
			even1.push_back(x); 
	}

	sort(odd1.begin(), odd1.end());
	sort(even1.begin(), even1.end());

	if (odd1.size() > even1.size())
	{
		odd1.pop_back();
		while (odd1.size() > 0 && even1.size() > 0)
		{
			even1.pop_back();
			odd1.pop_back();
		}
		
		int ans = accumulate(odd1.begin(), odd1.end(), 0); 
		cout << ans << endl;
	}

	else if (odd1.size() < even1.size()) 
	{
		even1.pop_back();
		while (odd1.size() > 0 && even1.size() > 0)
		{
			odd1.pop_back();
			even1.pop_back();
		}

		int ans = accumulate(even1.begin(), even1.end(), 0);
		cout << ans << endl;
	}

	else
		cout << "0\n";

	return 0;
}