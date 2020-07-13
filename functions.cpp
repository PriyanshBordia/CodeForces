#include <iostream>
#include <math.h>
#include <algorithm>

typedef long long ll;

#define sci(x) scanf("%d", &x);
#define pfi(x) printf("%d\n", x);

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

#define scs(s) scanf("%s", &s);
#define pfs(s) printf("%s\n", s);

using namespace std;

int main()
{
	int n;
	sc(n);
	
	return 0;
}

#include <bit/stdc++.h>

#include <vector>
#include <map>
#include <set>

#define sci(x) scanf("%d", &x);
#define pfi(x) printf("%d ", x);

	int a[n];
	for (int i = 0; i < n; i++){ sc(a[i]); }

	for (int i = 0; i < n; i++){ pf(a[i]); }


int isDivisible(int x, int y)
{
	if (y == 0)
		return 0;

	else if (x % y == 0)
		return 1;

	else
		return 0;
}

int isPrime(int x)
{
	if (x == 2)
		return 1;

	else if (x == 1 || x % 2 == 0)
		return 0;
	
	else
	{
		for (int i = 3; i <= sqrt(x); i += 2)
		{
			if (x % i == 0)
				return 0;
		}
		
		return 1;
	}
}

int isCoPrime(int x, int y)
{
	if (x == 2)
	{
		if ((y % 2) == 0)
			return 0;
		else
			return 1;
	}

	else
	{
		int min = (x < y) ? x : y;
		for (int i = 2; i <= sqrt(min); i++)
		{
			if (x % i == 0 && y % i == 0)
				return 0;
		}

		return 1;
	}
}