#include <iostream>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	int n, k; cin >> n >> k;

	if (n < k) 
		no;
	
	else if ((n % k) % 2 == 0)
	{	
		yes;


		int b[k];
		for (int j = 0; j < k; j++)
			b[j] = 1;

		int i(0), temp(n - k);

		while (temp > 1)
		{
			b[i] += 2;
			temp -= 2;
			i = (i + 1) % k;
		}

		for (int j = 0; j < k; j++)
			cout << b[j] << " ";

		cout << endl;	
	}

	else
		no;

	return;
}


int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}
