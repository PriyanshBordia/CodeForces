#include <iostream>
#include <numeric>

using namespace std;

int main()
{
	int n; cin >> n;

	int x[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> x[i];
	}

	(accumulate(x, x + n, 0) %  (n + 1) == 0) ? cout << "2\n" : cout <<  "5\n";
	
	return 0;
}