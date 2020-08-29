#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;

	int a[n]; for (int i = 0; i < n; ++i) cin >> a[i] >> a[i];

	int x; cin >> x;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] >= x)
		{
			cout << n - i << endl;
			return 0;
		}
	}

	cout << "0\n";
	
	return 0;
}