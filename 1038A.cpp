#include <iostream>
#include <cstring>
#include <algorithm>
#include <string.h>

typedef long long ll;

#define sc(x) scanf("%d", &x);

#define pf(x) printf("%d\n", x);

using namespace std;

int main()
{
	int n, k;
	sc(n);
	sc(k);

	string s;
	cin >> s;

	int alpha[k] = { 0 };

	for (int i = 0; i < n; i++)
	{
		alpha[(s[i] - 'A')]++;
	}

	int ans = 100000;

	for (int i = 0; i < k; i++)
	{
		if (alpha[i] < ans)
			ans = alpha[i];
	}
	
	pf(ans * k);

	return 0;
}

// for (int i = 0; i <= (n - k); i++)
	// {	
	// 	string t = s.substr(i, k);
		
	// 	sort(t.begin(), t.end());

	// 	int flag = 1;
	// 	for (int j = 0; j < k; j++)
	// 	{
	// 		if (t[j] != char('A' + j))
	// 		{
	// 			flag = 0;
	// 			break;
	// 		}
	// 	}

	// 	if (flag)
	// 		ans++;
	// }