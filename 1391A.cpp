#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	ll n; scll(n);
	
	for (int i = 0; i < n; i++)
		cout << i + 1 << " ";

	cout<<endl;
	
	return;
}

int main()
{
	ll t; scll(t);
	
	while (t--)
		solve();	

	return 0;
}