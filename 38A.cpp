#include <iostream>

#define sc(x) scanf("%d", &x);
#define pf(x) printf("%d\n", x);
 
using namespace std;

int main()
{
	int n;
	sc(n);

	int d[n - 1];
	for (int i = 0; i < n - 1; i++){ sc(d[i]); }

	int a = 0, b = 0;
	sc(a);
	sc(b);

	int ans = 0;

	for (int i = a - 1; i < b - 1; i++)
		ans += d[i];

	pf(ans);

	return 0;
}