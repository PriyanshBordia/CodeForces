#include <iostream>
typedef long long ll;
using namespace std;

void solve()
{
	int n; cin >> n;

	if (n >= 1)
		cout << "9";

	if (n >= 2)
		cout << "8";

	if (n >= 3)
		cout << "9";

	if (n >= 4)
	{
		n -= 3;
		int i = 0; 
		while(n--)
		{
			cout << i;
			i = (i + 1) % 10;
		}
	}

	cout << endl;
	
	return;
}

int main()
{
	ll t = 1; cin >> t;
	
	while (t--)
		solve();

	return 0;
}