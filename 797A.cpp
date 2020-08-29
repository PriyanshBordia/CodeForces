#include <iostream>
#include <math.h>

using namespace std;

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

int main()
{
	int k, n; cin >> n >> k;

	int cnt[100005] = { 0 }, ot(0);

	cnt[1] = 1;
	for (int i = 2; i <= n && ot < k; i++)
	{
		if (isPrime(i) && n % i == 0)
		{
			while (n % i == 0 && n > 1 && ot < (k - 1))
			{
				n /= i;
				cnt[i]++;
				ot++;
			}
		}
	}

	if (ot < k && n != 1)
	{
		cnt[n]++;
		ot++;
	}

	if (ot >= k)
	{
		for (int i = 2; i < 100005; i++)
		{
			while (cnt[i])
			{
				cout << i << " ";
				cnt[i]--;
			}
		}

		cout << endl;
	}
	
	else
		cout << "-1\n";

	return 0;
}
