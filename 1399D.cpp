#include <iostream>
#include <cstring>

using namespace std;

void solve()
{
	ll n; cin >> n;

	string s; cin >> s;
	
	ll zero(0), one(0);
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == '0')
			zero++;
		else
			one++;
	}

	if (zero == one)
	char t = '1', r = '0';

	ll k(0), a[n];
	for (int i = 1; i < n; i++)
	{
		if ((t == '1' && a[i] == '0') || (t == '0' && a[i] == '1'))
		{
			a[i] = 1;

			if (k == 0)
				k++;
		}

		else if ((t == '1' && a[i] == '0') || (t == '0' && a[i] == '1'))
		{
			r+= 
			a[i] = 2;
		}

		else
		{
			k++;
		}
	}
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