#include <iostream>

using namespace std;

int main()
{
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);

	int p[n];
	for (int i = 0; i < n; i++){ scanf("%d", &p[i]); }

	int s[n];
	for (int i = 0; i < n; i++){ scanf("%d", &s[i]); }
	
	int c[k];
	for (int i = 0; i < k; i++){ scanf("%d", &c[i]); }

	int count = 0;
	for (int i = 0; i < k; i++)
	{
		int power = p[c[i] - 1];
		int school =  s[c[i] - 1];

		for (int j = 0; j < n; j++)
		{
			if ((s[j] == school) && (p[j] > power))
			{
				count++;
				// cout << power << " " << school << " " << i << " " << j << endl;
				break;
			}
		}
	}

	printf("%d\n", count);

	return 0;
}