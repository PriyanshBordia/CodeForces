#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[n], b[n];
	for (int i = 0 ; i < n; i++)
	{
		cin >> a[i] >> b[i];
	}

	int area = 0;

	if (n == 1)
		area = -1;

	else if (n == 2)
	{
		if (a[0] == a[1] || b[0] == b[1])
			area = -1;

		else
			area = abs(a[1] - a[0]) * abs(b[1] - b[0]);
	}

	else
		area = max(abs(a[2] - a[1]), max(abs(a[1] - a[0]), abs(a[2] - a[0]))) * max(abs(b[2] - b[1]), max(abs(b[1] - b[0]), abs(b[2] - b[0]))); 
	
	cout << area << "\n";

	return 0;
}