#include <iostream>
#include <algorithm>

#define yes printf("Yes\n");
#define no printf("No\n");

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }

	int count[n];

	for (int i = 0; i < n; i++)
	{
		count[i] = 0;

		if (i % 2 == 0)
		{
			while (a[i] != i)
			{
				count[i]++;
				a[i] = (a[i] + 1) % n;
			}
		}

		else
		{
			while (a[i] != i)
			{
				count[i]++;
				a[i] = (n + a[i] - 1) % n;
			}
		}
	}

	if (*max_element(count, count + n) == *min_element(count, count + n))
		yes

	else
		no

	return 0;
}
