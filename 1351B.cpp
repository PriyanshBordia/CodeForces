#include <iostream>
#include <math.h>

using namespace std;

int isPerfectSquare(int x)
{

	if ((sqrt(x) - floor(sqrt(x)) == 0))
		return sqrt(x);

	else 
		return 0;
}

int Area(int a, int b)
{
	return a * b;
} 

int main()
{
	int n;
	cin >> n;

	int a1, b1, a2, b2;
	for (int i = 0; i < n; ++i)
	{
		cin >> a1 >> b1;
		cin >> a2 >> b2;

		int Side = isPerfectSquare(Area(a1, b1) + Area(a2, b2));
		
		if (!Side)
			cout << "No" << endl;

		else
		{
			if ((((a1 > b1) ? a1 : b1) == Side) && (((a2 > b2) ? a2 : b2) == Side) && ((((a1 < b1) ? a1 : b1) + ((a2 < b2) ? a2 : b2)) == Side))
				cout << "Yes" << endl;
			
			else
				cout << "No" << endl;
		}
	}

	return 0;
}
