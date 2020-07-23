#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>

typedef long long ll;

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void print(ll arr[], ll size);

int main()
{
	ll t;
	scll(t);

	while (t--)
	{
		ll n, m;
		cin >> n >> m;

		ll a[m], b[m];

		for (int i = 0; i < m; i++)
		{
			cin >> a[i] >> b[i];
		}

		dort
	}

	return 0;
}

void print(ll arr[], ll size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%lld ", arr[i]);
	}

	printf("\n");
}