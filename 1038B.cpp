#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	if (n == 1 || n == 2)
		cout << "No" << endl;

	else
	{
		cout << "Yes" << endl;

		cout << n / 2 << " ";

		for (int i = 2; i <= n; i += 2)
		{
			cout << i << " ";
		}

		cout << endl;
		
		if (n % 2 == 0)
			cout << n / 2 << " ";

		else
			cout << n / 2 + 1 << " ";
		for (int i = 1; i <= n; i += 2)
		{
			cout << i << " ";
		}

		cout << endl;
	}

	return 0;
}