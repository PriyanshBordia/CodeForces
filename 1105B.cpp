#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>

typedef long long ll;

#define sc(x) scanf("%d", &x);
#define pf(x) printf("%d\n", x);

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int main()
{

	int stack[200001];
	int top = 0;

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

	// for (int i = 0; i < n; i++)
	// {
	// 	int a[26] = { 0 };

	// 	for (int j = i; j < n - k; j += k)
	// 	{			
	// 		string t = s.substr(j, k);

	// 		if (count(t.begin(), t.end(), t[0]) == t.size())
	// 			a[t[0] - 'a']++;
	// 	}

	// 	stack[top++] = *max_element(a, a + n); 

	// 	// cout << stack[top - 1] << endl;
	// }

	// int ans = *max_element(stack, stack + top);

	cout << max << endl;
	
	return 0;
}