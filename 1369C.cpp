#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while(t--)
	{
		long int n, k;
		scanf("%ld %ld", &n, &k);

		long int a[n];
		for (int i = 0; i < n; ++i) { scanf("%ld", &a[i]); }

		sort(a, a + n);

		long int w[k];
		for (int i = 0; i < k; ++i) { scanf("%ld", &w[i]); }

		sort(w, w + k);

		long long int sum = 0; 
		
		for (int j = n - 1; j > k; j--)
		{
			if (w[n - j - 1] == 1)
			{
				sum += 2 * a[j];
				w[n - j - 1]--;
			}

		}

		int i = 0;
		int z = 0;
		while (i <= k && z < k)
		{
			if (w[z] != 0)
			{
				sum += a[i];
				i += w[z++];
			}

			else
				z++;
		}

		printf("%lld\n", sum);
	}
}