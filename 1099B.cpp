#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long n;
	cin >> n;

	long s = sqrt(n);
	
	long ans(0);

	if (s * s >= n)
		ans = 2 * s;

	else if (s * (s + 1) >= n)
		ans = 2 * s + 1;
 
 	else if ((s + 1) * (s + 1) >= n)
 		ans = 2 * (s + 1);

	cout << ans << endl;

	return 0;
}

// Divide n int a and 'b' in such a manner that a * b = n and a + b will give the min no of lines required.
