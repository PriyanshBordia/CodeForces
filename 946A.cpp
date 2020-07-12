#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int B = 0;
	int C = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;

		(a > 0) ? B += a : C += a;
	}

	cout << B - C << endl;

	return 0;
}