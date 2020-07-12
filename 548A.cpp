#include <iostream>
#include <cstring>

typedef long long ll;

#define sc(x) scanf("%d", &x);
#define pf(x) printf("%d\n", x);

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int isPalindrome(string c)
{
	for (int i = 0; i < c.size() / 2 + 1; i++)
	{
		if (c[i] != c[c.size() - i - 1])
			return 0;
	}

	return 1;
}

int main()
{
	string s;
	cin >> s;

	int k;
	sc(k);

	if ((s.size() % k) != 0)
	{
		printf("NO\n");
		return 0;
	}
	
	k = s.size() / k;

	int flag = 1;

	int i = 0;
	while (i < s.size())
	{
		string t = s.substr(i, k);

		if (!isPalindrome(t))
			flag = 0;

		i += k;
	}
	
	(flag == 1) ? printf("YES\n") : printf("NO\n");

	return 0;
}