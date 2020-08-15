#include <iostream>
#include <math.h>
#include <map>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	ll n; scll(n);
	
	ll sum2(0), sum4(0);

	int cnt[100005] = { 0 }; 
	for (int i = 0; i < n; ++i)
	{
		int a; cin >> a; 

		sum2 -= cnt[a] / 2;
		sum4 -= cnt[a] / 4;

		cnt[a]++;

		sum2 += cnt[a] / 2;
		sum4 += cnt[a] / 4;
	}

	ll q; scll(q);

	while (q--)
	{
		char c; ll x; cin >> c >> x;

		sum2 -= cnt[x] / 2;
		sum4 -= cnt[x] / 4;
		
		cnt[x] = (c == '+') ? cnt[x] + 1 : cnt[x] - 1; 

		sum2 += cnt[x] / 2;
		sum4 += cnt[x] / 4;

		(sum2 >= 4 && sum4 >= 1) ? yes : no;
	}

	return;
}

int main()
{
	ll t = 1; //cin >> t;
	
	while (t--)
	{
		solve();
	}	

	return 0;
}


// As sum2 will also have ans of sum4 that equals atleast 8 planks required.