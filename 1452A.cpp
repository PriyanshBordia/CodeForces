#include <iostream>
#include <math.h>

using namespace std;

void solve()
{
	int x, y; cin >> x >> y;

	cout << max(x + y + abs(x - y) - 1, x + y)<< endl; 
	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}