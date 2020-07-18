#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>

using namespace std;

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

		if (n == 1)
		{
			(s[0] != 'a') ? cout << "1\n" : cout <<"0\n";
		}

		else if (n == 2)
		{
			int ans(0);

			if (s[0] == 'a')
			{
				if (s[1] != 'b')
					ans++;
			}

			else if (s[1] == 'a')
			{
				if (s[0] != 'b')
					ans++;
			}

			else if (s[0] == 'b')
			{
				if (s[1] != 'a')
					ans++;
			}

			else if (s[1] == 'b')
			{
				if (s[0] != 'a')
					ans++;
			}

			else 
				ans += 2;		

			cout << ans << endl;
		}

		else
		{
			int k = 1;

			int j = log2(n);

			string t(1, 'a' + j); 
			string r(1, 'a' + j);

			j -= 1;
			
			while (j >= 0)
			{
				if (j % 2 == 1)
				{
					for (int i = 0; i < k; i++)
					{
						t += char('a' + j);  
						r = char('a' + j) + r;
					}
				}
				
				else	
				{
					for (int i = 0; i < k; i++)
					{
						t = char('a' + j) + t;  
						r += char('a' + j);
					}
				}

				k *= 2;
				j--;
			}

			cout << t << " " << r << endl;

			int countA = 0;
			int countB = 0;
			int countC = 0;
			int countD = 0;

			for (int i = n - 1; i >= 0; i--)
			{
				if (s[i] != t[i])
					countA++;

				if (s[i] != r[i])
					countC++;
			}

			for (int i = 0; i < n; i++)
			{
				if (s[i] != r[i])
					countB++;

				if (s[i] != t[i])
					countD++;
			}

			cout << min(countB, min(countA, min(countD, countC))) << endl;
		}
	}
	
	return 0;
}
