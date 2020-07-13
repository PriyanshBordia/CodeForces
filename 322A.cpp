#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	cout << n + m - 1 << endl;

	for (int j = 1; j <= m; j++)
	{
		cout << "1 " << j << endl;
	}

	for (int i = 2; i <= n; i++)
	{
		cout << i << " 1"  << endl; 
	}

	return 0;
}