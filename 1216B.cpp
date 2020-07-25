#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
	int n; cin >> n;

	pair<int, int> a[n];
	for (int i = 0; i < n; i++)
	{ 
		int x;
		cin >> x; 

		a[i] = make_pair(x, i + 1);
	}

	sort(a, a + n);

	int b[1001];
	long shots(0);
	for (int i = n - 1; i >= 0; --i)
	{
	 	shots += (a[i].first * (n - i - 1)) + 1;
	 	b[n - i] = a[i].second;
	} 

	cout << shots << endl;

	for (int i = 1; i <= n; i++)
		cout << b[i] << " ";


	cout << endl;

	return 0;
}