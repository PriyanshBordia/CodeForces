#include <iostream>

typedef long long ll;

#define scll(x) scanf("%lld", &x);
#define pfll(x, y) printf("%lld %lld\n", x, y);


using namespace std;

int main()
{
	ll a, b;
	scanf("%lld %lld", &a, &b);
	
	while (a != 0 && b != 0)
	{
		if (a >= (2 * b))
		{
			a -= ((a / (2 * b)) * 2 * b);
		}

		else if (b >= (2 * a))
		{
			b -= ((b / (2 * a)) * 2 * a); 
		}

		else
			break;
	}

	pfll(a, b)

	return 0;
}