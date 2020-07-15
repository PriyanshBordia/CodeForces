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

	int i = 0;
	while (i < n)
	{
		while ()
	}

	for (int i = 0; i < n; i++)
	{
		int a[26] = { 0 };

		for (int j = i; j < n - k; j += k)
		{			
			string t = s.substr(j, k);

			if (count(t.begin(), t.end(), t[0]) == t.size())
				a[t[0] - 'a']++;
		}

		stack[top++] = *max_element(a, a + n); 

		// cout << stack[top - 1] << endl;
	}

	int ans = *max_element(stack, stack + top);

	cout << ans << endl;
	
	return 0;
}