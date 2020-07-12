#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

bool hasDigit(string s)
{
	for (int i = s.size() - 1; i >= 0; i--)
	{
		if (s[i] == '8')
			return 1;
	}

	return 0;
}

int main()
{
	int a;
	cin >> a;

	int b = a;
	for (int i = 1; i <= 16; i++)
	{
		if (hasDigit(to_string(b + i)))
		{ 
			cout << i << endl;
			return 0;
		}
	}

	return 0;
}