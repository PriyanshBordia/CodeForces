#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n; cin >> n;

	int seven(0), four(0);

	int temp = n;
	while (temp > 0)
	{
		if (temp % 4 == 0)
		{
			temp -= 4;
			four++;
		}

		else
		{
			temp -= 7;
			seven++;
		}
	}

	if (temp == 0)
	{
		seven += 4 * (four / 7);
		four = four % 7;

		for (int i = 0; i < four; i++){ cout << "4"; }
		for (int i = 0; i < seven; ++i){ cout << "7"; }
		cout << endl;
	}

	else
		cout << "-1\n";

	return 0;
}