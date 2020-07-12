#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	char c;

	int count_One = 0;
	int count_Zero = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> c;

		if (c == 'z')
			count_Zero++;
		
		else if (c == 'n')
			count_One++;
	}

	for (int i = 0; i < count_One; i++)
		cout << "1 ";

	for (int i = 0; i < count_Zero; i++)
		cout << "0 ";

	cout << endl;

}