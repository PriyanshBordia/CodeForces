#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	ll n; scll(n);
	
	// if (n == 1)
	// 	cout << "8\n";
	
	// else if (n == 2)
	// 	cout << "98\n";

	// else if (n == 3)
	// 	cout << "998\n";

	// else
	// {
		int g = ceil((n * 1.0) / 3);

		// cout << "998";

		for (int i = 1; i <= n - g; i++)
			cout << "9";

		while(g--)
			cout << "8";

		cout << endl;
	// }

	return;
}

int main()
{
	ll t; scll(t);
	
	while (t--)
	{
		solve();
	}	

	return 0;
}