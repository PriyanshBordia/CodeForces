#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

typedef long long ll;

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int main()
{
	ll n;
	cin >> n;

	vector<ll> v(n);
 
  	for(int i = 0; i < n; i++)
    	cin >> v[i];
 
	if (n == 1)
	{
	    cout << v[0] << endl;
	    return 0;
	}
 
  	vector<ll> a(n);
 
	for (int i = 0; i < n; i++)
	{
	    if (i == 0 || i == 1)
	    	a[i] = v[i];

	    else
	   		a[i] = v[i] + a[i - 2];
	}
 
  	ll ans = a[n - 1];
 
	for (int i = 0; i < n - 1; i++)
	{
		ll sum = v[i] + v[i + 1];		
										
		if (i > 1)
			sum += a[i - 2];
		
		if (i % 2 == 1)
			sum += a[n - 1];
		
		else
			sum += a[n - 2];
		
		sum -= a[i + 1];

		ans = max(ans, sum);
	}
 
  	cout << ans << endl;

	return 0;
}
