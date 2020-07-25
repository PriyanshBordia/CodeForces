#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, m; cin >> n; cin >> m;

	if (n < 30)
		cout << m % (int)pow(2, n) << endl;

	else
		cout << m << endl;

	return 0;
}
