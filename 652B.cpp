#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n; cin >> n;
 
	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	sort (a, a + n);

	for (int i = 0; i < n / 2; i++)
		cout << a[i] << " " << a[n - i - 1] << " ";

	if (n & 1)
		cout << a[n / 2];

	cout << endl;

	return 0;
}