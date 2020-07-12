#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	int a[2 * n];
	for (int i = 0; i < 2 * n; ++i) {scanf("%d", &a[i]);}

	sort (a, a + 2*n);

	if (a[n - 1] < a[n])
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	
	return 0;
}