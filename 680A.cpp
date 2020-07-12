#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int a[5];
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

	sort(a, a + 5);

	int sum = a[0] + a[1] + a[2] + a[3] + a[4];

	int sum1 = sum; 
	int sum2 = sum; 
	int sum3 = sum; 
	int sum4 = sum;
	int sum5 = sum;

	if (a[0] == a[1] && a[1] == a[2])
		sum1 = sum1 - a[2] - a[1] - a[0];	

	else if (a[1] == a[2] && a[2] == a[3])
		sum1 = sum1 - a[3] - a[2] - a[1];

	else if (a[2] == a[3] && a[3] == a[4])
	{
		sum1 = sum1 - a[4] - a[3] - a[2];
	}

	if (a[0] == a[1])
		sum2 = sum2 - a[1] - a[0];

	if (a[1] == a[2])
		sum3 = sum3 - a[1] - a[2];

	if (a[2] == a[3])
		sum4 = sum4 - a[2] - a[3];

	if (a[3] == a[4])
		sum5 = sum5 - a[3] - a[4];

	cout << min(sum1, min(sum2, min(sum3, min(sum4, sum5)))) << endl;

	return 0;
}