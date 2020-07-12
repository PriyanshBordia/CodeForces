#include <iostream>

typedef long long ll;

#define sc(x) scanf("%d", &x);
#define scll(x) scanf("%lld", &x)

#define pf(x) printf("%d\n", x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int main()
{
	int n, m;
	sc(n);
	sc(m);

	int a[n];
	for (int i = 0; i < n; i++){ sc(a[i]); }

	int b[m];
	for (int i = 0; i < m; i++){ sc(b[i]); }

	int j = 0;
	int k = 0;

	while (j < n && k < m) 
	{
		if (a[j] <= b[k])
			k++;

		j++;
	}

	cout << k << endl;

	return 0;
}