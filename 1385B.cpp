#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>

typedef long long ll;

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

#define yes printf("YES\n");
#define no printf("NO\n");

using namespace std;

int main()
{
	int t = 0;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		set<int> s;
		vector<int> v;

		for (int i = 0; i < 2 * n; ++i)
		{
			int x = 0;
			cin >> x;

			if (s.find(x) == s.end())
			{
				s.insert(x);
				v.push_back(x);
			}
		}

		for (auto it = v.begin(); it != v.end(); it++)
			cout << *it << " ";

		cout << endl;
	}
	
	return 0;
}