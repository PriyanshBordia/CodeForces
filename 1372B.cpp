#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int A = 1;
		int B = n - 1;
		
		if (n % 2 == 0)
		{
			A = n / 2;
			B = n / 2;
		}

		else
		{ 
			for (int i = 2; i < 100000; i++)
			{
				if (n % i == 0)
				{
					A = n / i;
					B = n - n / i;
					break;
				}
			}
		}

		cout << A << " " << B << endl;
	}
	
	return 0;
}
