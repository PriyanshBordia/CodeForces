#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;

	int ans = min(k2, min(k5, k6)) * 256;
	
	k2 -= min(k2, min(k5, k6));

	ans += min(k2, k3) * 32;

	cout << ans << endl; 

	return 0;
}