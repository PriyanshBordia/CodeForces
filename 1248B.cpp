#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long int n;
	cin >> n;

	long int a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }

	sort(a, a + n);

	long long int x = 0; 
	long long int y = 0;

	for (int i = 0; i < n / 2; i++)
		x += a[i];

	for (int i = n / 2; i < n; i++)
		y += a[i];	

	signed long long int sum = (x * x) + (y * y);
	cout << sum << endl;
	
	return 0;
}