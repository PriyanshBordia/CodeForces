#include <iostream>

typedef long long ll;

#define house    1234567
#define car      123456  
#define computer 1234

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

int main()
{
	ll n; cin >> n;

	for (int a = 0; a <= n / house; a++)
	{
		for (int b = 0; b <= n / car; b++)
		{
			if ((n - (a * house) - (b * car)) % computer == 0 && n - (a * house) - (b * car) >= 0)
			{
				yes;
				return 0;
			}
		}
	}
	
	no;

	return 0;
}