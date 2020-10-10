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

int count(string a, string b, int m, int n) 
{ 
    // If both first and second string is empty, 
    // or if second string is empty, return 1 
    if ((m == 0 && n == 0) || n == 0) 
        return 1; 
  
    // If only first string is empty and second 
    // string is not empty, return 0 
    if (m == 0) 
        return 0; 
  
    // If last characters are same 
    // Recur for remaining strings by 
    // 1. considering last characters of both strings 
    // 2. ignoring last character of first string 
    if (a[m - 1] == b[n - 1]) 
        return count(a, b, m - 1, n - 1) + 
               count(a, b, m - 1, n); 
    else
        // If last characters are different, ignore  
        // last char of first string and recur for  
        // remaining string 
        return count(a, b, m - 1, n); 
} 

void solve()
{
	ll n; scll(n);

	string s; cin >> s;
	
	ll sum(0), ans(0), cnt[n];

	cnt[0] = int(s[0] - '0');
	for (int i = 1; i < n; i++)
	{
		cnt[i] = cnt[i - 1] + int(s[i] - '0');
	}
	
	else
	{
		for (int i = 2; i <= 9 && i <= n; ++i)
		{
			string t(i - 1, '0');

			for (int j = 0; j < i && j < n; j++)
			{					
				string r = t;
				
				r.insert(j, 1, (char)(i + '0'));

				for (int k = 0; k < n - i; k++)
				{
					string l = s.substr(k, i);
					
					if (l == r)
						ans++;
				}
			}
		}
	}

	cout << ans << endl;

	return;
}

int main()
{
	ll t; cin >> t;
	
	while (t--)
		solve();

	return 0;
}