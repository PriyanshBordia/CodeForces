#include <iostream>
#include <math.h>

typedef signed long long ll;

using namespace std;

int main()
{
	ll n, l, r; cin >> n >> l >> r;

	ll min = n - l + pow(2, l) - 1;

	ll max = 2 * (pow(2, n - r) - 1) + pow(2, r) - 1;

	cout << min << " " << max << endl;

	return 0;
}


// 11 7 9 

// 2 * (1 2)
// 1 1 1 1 1 2 4 8 16 32 64 