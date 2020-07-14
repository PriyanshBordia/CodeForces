#include <iostream>
#include <cstring>
#include <vector>

typedef long long ll;

#define sc(x) scanf("%d", &x);
#define pf(x) printf("%d\n", x);

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int main()
{
	int n, k;
	sc(n)
	sc(k)

	vector<string> v1;
	vector<string> v2;

	for (int i = 0; i < n; i += 2)
	{
		string t = s.substr(i, k);

		v1.push_back(t);	
	}

	for (int i = 1; i < n; i += 2)
	{
		string r = s.substr(i, k);

		v2.push_back(r);
	}
	
	return 0;
}