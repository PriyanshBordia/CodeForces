#include <iostream>
#include <algorithm>
#include <vector>

#define yes printf("Yes\n")
#define no printf("No\n")

using namespace std;

int main()
{
	int n, m; cin >> n >> m;

	int p[n + 1]; for (int i = 1; i <= n; i++) cin >> p[i];

	while (m--)
	{
		int l, r, x; cin >> l >> r >> x;

		int s(0);
		for (int i = l; i <=r ; ++i) 
		{ 
			if (p[i] < p[x]) 
				s++; 
		}

		(s == (x - l)) ? yes : no;	
	}

	return 0;
}