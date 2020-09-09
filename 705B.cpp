#include <iostream>

typedef long long ll;

using namespace std;

int main()
{
	ll n; cin >> n;

	ll ans(0);
 
	while (n--)
	{
		ll a; cin >> a;
		
		ans = ans + a - 1;

		(ans & 1) ? cout << "1\n" : cout << "2\n";
	}	

	return 0;
}