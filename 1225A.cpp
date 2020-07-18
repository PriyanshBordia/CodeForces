#include <iostream>

using namespace std;

int main()
{
	int dA, dB;
	cin >> dA >> dB;

	if (dB - dA == 0)
		cout << dA * 10 << " " << dA * 10 + 1 << endl;

	else if (dB - dA == 1)
		cout << dA << " " << dB << endl;
	
	else if (dA == 9 && dB == 1)
		cout << dA << " " << dB * 10 << endl;

	else
		cout << "-1\n";

	return 0;
}