#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>

typedef long long ll;

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void print(int arr[], int size);

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		string s;
		cin >> s;

		string t = "abacaba";

		int count = 0;
		
		for (int i = 0; i <= n - 7; i++)
		{
			string r = s.substr(i , t.size());

			if (r.compare(t) == 0)
			{
				count++;

				for (int k = 0; k < n; k++)
				{
					if (s[k] == '?')
						s[k] = 'd';
				}
			}
		}

		if (count == 0)
		{
			for (int i = 0; i <= n - 7; i++)
			{
				string r = s.substr(i , t.size());

				if (count == 0)
				{
					for (int j = 0; j < 7; j++)
					{
						if (r[j] == '?')
						{
							if (j == 3)
								r[j] = 'c';

							else if (j % 2 == 0)
								r[j] = 'a';

							else
								r[j] = 'b';
						}
					}
				}

				if (r.compare(t) == 0)
				{
					count++;
					for (int j = 0; j < 7; j++)
					{
						if (s[i + j] == '?')
						{
							if (j == 3)
								s[i + j] = 'c';

							else if (j % 2 == 0)
								s[i + j] = 'a';

							else
								s[i + j] = 'b';
						}
					}

					for (int k = i + 8; k < n; k++)
					{
						if (s[k] == '?')
							s[k] = 'd';
					}
				}
			}
		}

		if (count == 1)
		{
			yes;
			cout << s << endl;
		}

		else
			no;
	}

	return 0;
}

void print(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
}