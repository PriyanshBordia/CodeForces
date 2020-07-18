#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int min = 2 * (n / 7);
	int max = 2 * (n / 7);

	if (n % 7 == 6)
	 	min += 1;

	if (n % 7 == 1)
		max += 1;

	else if (n % 7 > 1)
		max += 2;
	
	cout << min << " " << max << endl;

	return 0;
}