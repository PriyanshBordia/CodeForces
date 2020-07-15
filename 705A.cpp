#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	cout << "I hate ";
	
	for (int i = 2; i <= n; i++)
	{
		cout << "that ";

		if (i & 1)
			cout << "I hate ";
		else
			cout << "I love ";
	}

	cout << "it\n";

	return 0;
}

