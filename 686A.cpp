#include <iostream>

typedef long long ll;

using namespace std;

int main()
{
	ll n, x; cin >> n >> x;

	ll dist(0);
	while (n--)
	{
		int d; char c; cin >> c >> d;

		if (c == '+')
			x += d;

		else 
		{
			if (c == '-' && x >= d)
				x -= d;

			else
				dist++;
		}
	}
	
	cout << x << " " << dist << endl;
	return 0;
}