#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int posF = 1000000;
	int posY = 1;

	int a[n];
	for (int i = 0; i < n; i++)
	{ 
		cin >> a[i]; 

		if (a[i] > posY && a[i] <= 500000)
			posY = a[i];

		else if (a[i] < posF && a[i] > 500000)
			posF = a[i];
	}

	cout << max(posY - 1, 1000000 - posF) << endl;
	
	return 0;
}