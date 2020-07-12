#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>

using namespace std;

int main()
{
	int t = 0;
	cin >> t;

	while (t--)
	{
		signed long long int a, b, m, n;

		scanf("%lld %lld %lld %lld", &a, &b, &n, &m);

		long long int v = a;
		long long int c = b;

		
		if ((a + b) < (m + n))
			cout << "NO" << t << endl;

		else
		{			
			int type = 0;

			while (m > 0 || n > 0)
			{
				if (m < n)
				{
					type = 1;
					n--;
				}

				else
				{
					type = 2;
					m--;
				}

				if (type == 1)
				{ 
					if (v > c)
					{ 
						if (v > 0)
						{
							v--;
						}

						else
						{
							cout << "NO" << t << endl;
							break;
						}
					}

					else
					 	c--;
				}

				else if (type == 2)
				{
					if (v > c)
					{
						if ( c > 0)
							c--;
						
						else
						{
							cout << "NO" << t << endl;
							break;
						}
					}

					else
						v--;
				}
			}

			if (type != 0)
			{
				if (n == 1)
				{ 
					if (v > c)
					{ 
						if (v > 0)
						{
							cout << "YES" << t << endl;
						}

						else
						{
							cout << "NO" << t << endl;
						}
					}

					else
					{
						cout << "YES" << t << endl;
					 	c--;
					}
				}

				else if (m == 1)
				{
					if (v > c)
					{
						if ( c > 0)
						{
							cout << "YES" << t << endl;
							c--;
						}
						
						else
						{
							cout << "NO" << t << endl;
						}
					}

					else
					{
						cout << "YES" << t << endl;
						v--;
					}
				}

			}
		}
	}
	
	return 0;
}
