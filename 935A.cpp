#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int l = 0;

	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			l++;
	}

	cout << l << endl;

	return 0;
}