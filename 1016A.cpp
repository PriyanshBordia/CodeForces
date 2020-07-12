#include <iostream>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int a[n];
	for (int i = 0; i < n; i++){ scanf("%d", &a[i]); }

	int res = 0;
	int pages = 0;

	for (int i = 0; i < n; i++)
	{
		pages = (res + a[i]) / m;

		res = (res + a[i]) % m;

		cout << pages << " ";
	}

	cout << endl;

	return 0;
}
