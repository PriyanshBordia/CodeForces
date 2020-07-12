#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	long long int n; 
	int k;
	scanf("%lld %d", &n, &k);

	long long int trail = pow(10, k);

	long long int x = (n * trail) / (__gcd(n, trail));
	 
	printf("%lld\n", x);
	
	return 0;
}