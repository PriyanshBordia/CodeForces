#include <iostream>
#include <cstring>

#define sc(x) scanf("%d", &x);
#define pf(x) printf("%d\n", x);

using namespace std;

int main()
{
	int n, k;
	sc(n)
	sc(k)

	string s;
	cin >> s;

	long max(0);
	for (char c = 'a'; c <= 'z'; c++)
	{
		int let(0), cnt(0);

		for (int i = 0; i < n; i++)
		{
			if (s[i] != c)
				let = 0;
			
			else
			{
				let++;
				
				if (let >= k)
				{
					cnt++;
					let = 0;
				}
			}
		}

		max = (cnt < max) ? max : cnt;
	}

	cout << max << endl;
	
	return 0;
}