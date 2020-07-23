#include <iostream>

typedef long long ll;

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int countN = 0;
	int countP = 0;
	int count0 = 0;

	ll coins(0);

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		if (x < 0)
		{
			coins += abs(x) - 1;
			countN++;
		}

		else if (x > 0)
		{
			coins += x - 1; 
			countP++;
		}

		else
		{
			coins++;
			count0++;
		}
	}

	if (countN & 1 && count0 == 0)
		coins += 2;

	cout << coins << endl; 

	return 0;
}
