#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int n; cin >> n;

	int b[1001];

	int a[n];
	for (int i = 0; i < n; i++)
	{ 
		cin >> a[i]; 

		b[i] = a[i];
	}

	sort(a, a + n);

	long shots(0);
	for (int i = n - 1; i >= 0; --i)
	{
	 	shots += (a[i] * (n - 1 - i)) + 1; 

	 	for (int j = 0; j < n; j++)
	 	{
	 		if (b[j] == a[i] && b[j] > 0)
	 		{
	 			b[j] = i - n;
	 			break;
	 		}
	 	}
	} 

	cout << shots << endl;
	for (int i = 0; i < n; i++)
		cout << abs(b[i]) << " ";

	cout << endl;

	return 0;
}