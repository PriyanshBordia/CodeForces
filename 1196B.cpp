#include <iostream>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

int main()
{
	int q; cin >> q;

	while (q--)
	{
		int n, k; cin >> n >> k;

		int a[n], odd(0), even(0); 
		for (int i = 0; i < n; i++)
		{ 
			cin >> a[i]; 

			(a[i] & 1) ? odd++ : even++;
		}

		if ((odd - k) % 2 == 0 && odd >= k)
		{
			yes;
			
			int cnt(0);
			for (int i = 0; i < n; i++)
			{
				if (a[i] & 1 && cnt < (k - 1))
				{
					cout << i + 1 << " ";
					cnt++;
				}
			}

			cout << n << endl;
		}

		else
			no;
	}

	return 0;
}