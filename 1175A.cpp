#include <iostream>

typedef long long ll;

using namespace std;

int main()
{
	ll t; cin >> t;

	while (t--)
	{
		ll n, k; cin >> n >> k;

		ll cnt(0);
		while (n != 0)
		{
			if (n % k == 0)
			{
				n /= k; 
				cnt++;
			}
			
			else
			{
				cnt += n % k;
				n -= n % k;
			}
		}

		cout << cnt << endl;
	}

	return 0;
}