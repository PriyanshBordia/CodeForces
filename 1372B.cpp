#include <iostream>

typedef long long ll;

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		int n; cin >> n;

		int A = 1;
		int B = n - 1;
		
		for (int i = 2; i < 1e05; i++)
		{
			if (n % i == 0)
			{
				A = n / i;
				B = n - n / i;
				break;
			}
		}

		cout << A << " " << B << endl;
	}
	
	return 0;
}
