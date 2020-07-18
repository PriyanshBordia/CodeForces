#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n == 1)
		cout << "a\n";

	else if (n == 2)
		cout << "ab\n";

	else if (n == 3)
		cout << "abb\n";

	else
	{
		for (int i = 0; i < n; i++)
		{
			if (i % 4 == 0 || i % 4 == 1 )
				cout << "a";

			else if (i % 4 == 2 || i % 4 == 3)
				cout << "b";
		}

		cout << endl;
	}

	return 0;
}