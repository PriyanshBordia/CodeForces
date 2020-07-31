#include <iostream>
#include <math.h>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	int x, n, m; cin >> x >> n >> m;

	if (x >= 40 || (x >= 19 && x & 1))
	{
		while (n > 0 && x > 0)
		{
			x = x / 2 + 10; 
			n--;
		}
	}


	while (m > 0 && x > 0)
	{
		x -= 10;
		m--;
	}

	while (n > 0 && x > 0)
	{
		x = x / 2 + 10; 
		n--;
	}	

	(x <= 0) ? yes : no;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)	
	{
		solve();
	}

	return 0;
}