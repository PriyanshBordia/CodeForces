#include <iostream>
#include <math.h>
#include <set>

using namespace std;

int main()
{
	int n, l, r;
	cin >> n >> l >> r;
	
	set<int> a;
	set<int> b;
	set<int> c;

	for (int i = l; i <= r; i++)
	{
		if (i % 3 == 0)
			a.insert(i);
		else if (i % 3 == 1)
			b.insert(i);
		else
			c.insert(i);
	}

	ll x = min(b.size(), c.size());
	ll y = a.size();

	if ((2 * x + y) < n)
		cout << "0\n";
	
	else
	{

	}

	return 0;
}