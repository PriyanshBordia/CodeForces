#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;

	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	int i = 0, cnt(0);
	while (i + 1 < n && cnt < 20000)	
	{
		if (a[i] > a[i + 1])
		{
			int start = i + 1;

			while (a[i] > a[i + 1] && i + 1 < n)
			{
				swap(a[i], a[i + 1]);
				i += 2;
			}

			int end = i - 1;

			cout << start << " " << end << endl;
			cnt++;

			i = 0;
		}

		else
			i++;
	}

	return 0;
}