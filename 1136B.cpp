#include <iostream>

using namespace std;

int main()
{
	int n, k; cin >> n >> k;

	int ans = 3 * n + min(k - 1, n - k);

	cout << ans	<< endl;
	
	return 0;
}