#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

void solve()
{
	ll x; cin >> x;

	if (x == 1)
	{
		cout << x << endl;
		return;
	}

	ll i(1);
	while (x > 0)
	{	
		x = x - ((pow(2, i) - 1) * i);

		cout << x << " " << (pow(2, i) - 1) * i<< endl;

		if (x > 0)
			i++; 
		else
			break;				
	}

	cout << i - 1 << endl;

	return;
}

int main()
{
	ll t; cin >> t;
	
	while (t--)
		solve();

	return 0;
}