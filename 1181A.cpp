#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	ll x, y, z;
	cin >> x >> y >> z;

	ll coco(0);
	ll debt(0);

	if (x % z > y % z)
	{
		coco += (y / z);
		
		y -= (coco * z);

		ll debt = min(z - (x % z), y);

		if ((x + debt) % z != 0)
			debt -= ((x + debt) % z);

		if (debt < 0)
			debt = 0;

		coco += ((x + debt) / z);
	
		cout << coco << " " << debt << endl;
	}

	else
	{
		coco += (x / z);

		x -= (coco * z);

		ll debt = min(z - (y % z), x);

		if ((y + debt) % z != 0)
			debt -= ((y + debt) % z);

		if (debt < 0)
			debt = 0;

		coco += ((y + debt) / z);

		cout << coco << " " << debt << endl;
	}

	
	return 0;
}