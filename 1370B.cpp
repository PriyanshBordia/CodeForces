#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int n; cin >> n;

	vector<int> even;
	vector<int> odd;

	for (int i = 1; i <= 2 * n; i++)
	{ 
		int x; cin >> x; 

		(x % 2 == 0) ? even.push_back(i) : odd.push_back(i);
	}

	if (odd.size() == 0) { even.pop_back(); even.pop_back(); }

	else if (odd.size() % 2 == 1) { even.pop_back(); odd.pop_back(); }

	else { odd.pop_back(); odd.pop_back(); }

	int i = 0; 
	while (i < even.size())
	{
		cout << even[i] << " " << even[i + 1] << endl;  
		i += 2;
	}

	int j = 0; 
	while (j < odd.size())
	{
		cout << odd[j] << " " << odd[j + 1] << endl;
		j += 2;
	}

	return;	
}

int main()
{
	int t; scanf("%d", &t);

	while(t--)
		solve();
	
	return 0;
}