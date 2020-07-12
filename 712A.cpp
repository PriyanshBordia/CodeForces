#include <iostream>

typedef long long ll;

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld ", x);

using namespace std;

int main()
{
	ll n;
	scll(n);

	ll a[n];
	for (int i = 0; i < n; i++){ scll(a[i]); }

	ll b[n];

	for (int i = 0; i < n - 1; i++)
	{
		b[i] = a[i] + a[i + 1];
 	}

 	b[n - 1] = a[n - 1];
	
	for (int i = 0; i < n; i++){ pfll(b[i]); }

	printf("\n");

	return 0;
}

// for (int j = n - 1; j >= 0; j--)
	// {
	// 	b[j] = a[j];

	// 	for (int k = j + 1; k < n; k++)
	// 	{
	// 		((k - j) % 2 == 1) ? b[j] += b[k] : b[j] -= b[k];
	// 	}
	// }