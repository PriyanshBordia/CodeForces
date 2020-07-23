#include <iostream>
#include <numeric>

typedef long long ll;

using namespace std;

int main()
{
	ll n;
	cin >> n;

	ll a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0 && ans == 1)
		{
			printf("NO\n");
			return 0; 
		}
		
		ans = (ans + a[i]) % 2;
	}


	(ans & 1) ? printf("NO\n") : printf("YES\n");

	return 0;
}