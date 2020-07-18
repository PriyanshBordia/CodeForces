#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>

#define sc(x) scanf("%d", &x);

using namespace std;

int main()
{
	int t;
	sc(t)

	while(t--)
	{
		int n, x;
		cin >> n >> x;

		set<int> pos;
		for (int i = 0; i < n; i++){ int l; sc(l); pos.insert(l); }

		int v = 0;

		int i = 1;
		while (x > 0)		
		{
			if (pos.find(i) == pos.end())
			{
				pos.insert(i);
				x--;
			}

			i++;
		}

		while (true)
		{
			if (pos.find(i) == pos.end())
			{
				i--;
				break;
			}
		
			else
				i++;
		}
		
		cout << i << endl;
	}

	return 0;
}