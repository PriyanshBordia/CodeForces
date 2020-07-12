#include <iostream>
#include <math.h>
#include <numeric>
#include <algorithm>
#include <bits/stdc++.h>

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

		int A =1;
		int B=n - 1;
		
		if (n % 2 == 0)
		{
			A = n / 2;
			B = n / 2;
		}

		else
		{ 
			int LCM = 0;
			int minimum = n;

			for (int i = n / 2; i > 0; i--)
			{
				int a = i;
				int b = n - i;

				LCM = (a * b) / __gcd(a, b);

				if (LCM < minimum)
				{
					A = a;
					B = b;
					minimum = LCM;
				}
			}
		}

		cout << A << " " << B << endl;
	}
	
	return 0;
}
