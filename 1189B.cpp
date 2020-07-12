#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a + n);

	if (a[n - 1] < a[n - 2] + a[n - 3])
	{
		cout << "YES" << endl;

		for (int i = 0; i < n - 2; i++)
		{
			cout << a[i] << " ";
		}

		cout << a[n - 1] << " " << a[n - 2] << endl;
	}

	else  
		cout << "NO" << endl;
	
	return 0;
}