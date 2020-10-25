	ll a[n]; for (ll i = 0; i < n; i++){ scll(a[i]); }

	for (ll i = 0; i < n; i++){ pfll(a[i]); }

int fact(int n)
{
	int ans(1);
	for (int i = 2; i <= n; ++i)
	{
		ans *= n;
	}

	return ans;
}

ll modfact(ll n)
{
	ll ans(1);
	for (ll i = 2; i <= n; ++i)
	{
		ans *= n;
		ans = ans % ll(1e09 + 7);
	}

	return ans;
}


bool isPerfectSquare(long double x)
{
	long double sr = sqrt(x);

	return (sr - floor(sr) == 0);
} 

ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
	ll k(0);
	ll m = min(a, b);
	for (ll i = 1; i <= m; i++)
	{
		if (a % i == 0 && b % i == 0)
			k = m;
	}
	return k;
}

void print(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		pfi(arr[i]);

	printf("\n");
}

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