#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int i = 1;
	while (a >= 0 && b >= 0)
	{
		if (i % 2 != 0)
			a -= i;

		else
			b -= i;

		i++;
	}

	(a < 0) ? cout << "Vladik" << endl : cout << "Valera" << endl;  
	

	return 0;
}