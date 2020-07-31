#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		int n; cin >> n;

		int e[n + 1];
		for (int i = 0; i <= n; i++){ e[i] = 0; } 

		for (int i = 0; i < n; i++){ int x; cin >> x; e[x]++; }

		int grps(0), buff(0);
		for (int i = 1; i <= n; ++i)
		{
			grps += ((e[i] + buff) / i); 
			buff = (e[i] + buff) % i;
		}
		
		cout << grps << endl;
	}

	return 0;
}