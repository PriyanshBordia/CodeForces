#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, k; cin >> n >> k;

	if (k == n)
	{
		cout << "-1\n";
		return 0;
	}

	int i = 2; 
	while (i <= (n - k))
	{
		cout << i << " ";
		i++;
	}

	cout << "1 ";
	
	int j = n - k + 1;

	while (j <= n)
	{
		cout << j << " ";
		j++;
	}

	cout << endl;

	return 0;
}
