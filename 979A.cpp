#include <iostream>

typedef long long ll;

#define sci(x) scanf("%d", &x);
#define pfi(x) printf("%d\n", x);

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

#define scs(s) scanf("%s", &s);
#define pfs(s) printf("%s\n", s);

using namespace std;

int main()
{
	ll n;
	scll(n);

	if (n == 0)
		cout << n << endl;

	else if (n % 2 == 1)
		cout << (n + 1) / 2 << endl;

	else 
		cout << n + 1 << endl;
	
	return 0;
}
