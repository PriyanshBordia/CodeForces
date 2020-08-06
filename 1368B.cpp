#include <iostream>
#include <cstring>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	ll k; cin >> k;

	string s = "codeforces";

	ll j = 1, ans = 1;
	while (ans < k)
		ans = pow(++j, 10);

	ans = 1;
	for (int i = 0; i < 10; ++i)
	{
		ans *= j;
		cout << string(j, s[i]); 

		ll pr = 1;
		for (int u = 10 - i - 1; u > 0; u--)
			pr *= (j - 1);

		if (ans * pr >= k)
			j--;
	}	

	cout << endl;

	return 0;
}