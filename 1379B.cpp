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
	int t;
	cin >> t;

	while (t--)
	{
		ll l, r, m;
		cin >> l >> r >> m;

		ll a, b = l, c = r;
		
		a = (l & 1) ? (l + 1) : l;

		int temp = 1;
		while ((m - b + c) % a != 0 && b <= r && c >= l)
		{
			if (temp % 2 == 0)
				b += 1;
			else
				c -= 1;

			temp++;
		}

		cout << a << " " << b << " " << c << endl;
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