#include <iostream>

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		int n; cin >> n;

		int sum(0), cnt(0); 
		for (int i = 0; i < n; i++) 
		{
			int x; cin >> x;

			sum += x;
			
			if (x == 0)
				cnt++;
		}

		sum += cnt;

		if (sum == 0)
			cnt++;

		cout << cnt << endl;
	}

	return 0;
}