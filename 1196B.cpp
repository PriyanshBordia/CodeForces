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

		if ((odd - k) % 2 == 0)
		{
			yes;
			int i = 0;
			while (k--)
			{
				if (a[i] & 1)
					cout << a[i] << " ";
				i++;
			}
			cout << endl;
		}

		else
			no;
	}

	return 0;
}