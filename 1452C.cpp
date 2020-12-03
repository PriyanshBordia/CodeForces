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
#define pb(x) push_back(x)

using namespace std;

char stack[10000];
int top = 0;

void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1000000000);
	
	string s; cin >> s;

	int lpar1 = 0, lpar2 = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			stack[top++] = '(';
		}

		else if (s[i] == ')')
		{
			top -= 1;
			while (top >= 0 && stack[top] != '(')
				top--;
			if (top >= 0)
				cnt++;
		}

		else if (s[i] == '[')
		{
			stack[top++] = '[';
		}

		else if (s[i] == ']')
		{
			top -= 1;
			while (top >= 0 && stack[top] != '[')
				top--;
			if (top >= 0)
				cnt++;
		}

		if (top < 0)
			top = 0;
	}
	
	pfll(cnt);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}