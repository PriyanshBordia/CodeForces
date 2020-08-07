#include <iostream>
#include <math.h>

typedef long long ll;

#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)

using namespace std;

void solve()
{
	ll n; cin >> n;
	
	ll ans(n / 2 + 1);

	cout << ans << endl;

	return;
}

int main()
{
	ll t; scll(t);
	
	while (t--)
		solve();	

	return 0;
}