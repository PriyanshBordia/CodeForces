#include <iostream>
#include <cstdio>
#include <math.h>

typedef long long ll;

#define sc(x) scanf("%d", &x);
#define scll(x) scanf("%lld", &x)

#define pf(x) printf("%d\n", x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int main()
{
	string s;
	cin >> s;

	int len = s.size();

	int i = (len - 1) / 2;
	
	cout << s[i];

	int j = 1;

	i += pow(-1, j + 1) * j;

	while (j < len)
	{
		cout << s[i];

		j++;
		i += pow(-1, j + 1) * j;
	}

	cout << endl;

	return 0;
}

