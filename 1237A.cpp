#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n; cin >> n;

	int flag(0);
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;

		if (a & 1)
		{
			if (flag)
			{
				if (floor(a / 2.0) == -0)
					cout << abs(floor(a / 2.0))<< endl;

				else 
					cout << floor(a / 2.0) << endl;
				flag--;
			}

			else
			{
				if (ceil(a / 2.0) == -0)
					cout << abs(ceil(a / 2.0)) << endl;
				
				else
					cout << ceil(a / 2.0) << endl;

				flag++;
			}
		}

		else
			cout << a / 2 << endl;
	}

	return 0;
}
