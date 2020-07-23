#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		int n; cin >> n;

		string s; cin >> s;

		int flag(1);

		int i = 0;
		while (i < (n / 2))
		{
			if (s[i] != s[n - i - 1])
			{
				if ((s[i] == 'a' && s[n - i - 1] != 'c') || (s[i] == 'z' && s[n - i - 1] != 'x'))
				{
					flag = 0;
					break;
				}

				else if ((s[i] != 'c' && s[n - i - 1] == 'a') || (s[i] != 'x' && s[n - i - 1] == 'z'))
				{
					flag = 0;
					break;
				}	

				else if (abs(s[i] - s[n - i - 1]) != 2)
				{
					flag = 0;
					break;
				}
			}

			i++;
		}

		(flag == 1) ? printf("YES\n") : printf("NO\n");
	}
}

