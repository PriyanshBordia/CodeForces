#include <iostream>

typedef long long ll;

using namespace std;

ll inverseFibo(ll n)
{
	if (n == 0)
		return 0;

	else if (n == 1)
		return 1;

	else
		return inverseFibo(n - 1); 
}

int main()
{
	ll n;
	cin >> n;

	ll f0 = 0;
	ll f1 = 1;
	ll f = 0;

	if (n == 0)
	{
		cout << "0 0 0" << endl;
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		f = f0 + f1;

		if (f == n)
			break;

		f0 = f1;
		f1 = f;
	}

	cout << f1 << " " << f0 << " 0" << endl;
	
	return 0;
}