#include <iostream>
#include <cstring>
#include <set>

using namespace std;

void solve()
{
	string s; cin >> s;

	set<int> cnt;

	// for (int i = 0; i < 12; i++)
	// {
	// 	if (s[i] == 'X')
	// 	{
	// 		cnt.push_back(1);
	// 		break;
	// 	}
	// }

	// for (int i = 0; i < 6; i++)
	// {
	// 	if (s[i] == 'X' && s[i + 6] == 'X')
	// 	{
	// 		cnt.push_back(2);
	// 	}
	// }

	int a[] = { 1, 2, 3, 4, 6, 12};

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 12 / a[i]; j++)
		{
			if (s[j] == 'X')
			{
				int flag = 1;
				for (int k = j; k < 12; k += (12 / a[i]))
				{
					// cout << a[i] << " " << j << " " << k << endl;
					if (s[k] != 'X')
					{
						flag = 0;
						break;
					}
				}

				if (flag == 1)
				{
					cnt.insert(a[i]);
					break;
				}
			}
		}
	}
		
	cout << cnt.size() << " ";
	
	for (auto i = cnt.begin(); i != cnt.end(); i++)
		cout << *i << "x" << 12 / *i << " ";

	cout << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}