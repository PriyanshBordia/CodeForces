#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;


int main()
{
	string s;
	cin >> s;

	char c = 'a';

	int rotations = 0;
	for (int i = 0; i < s.size(); i++)
	{		
		rotations += min(abs(s[i] - c), min(abs('z' - c + s[i] - 'a' + 1), abs('z' - s[i] + c - 'a' + 1)));

		c = s[i];
	}

	cout << rotations << endl;
	return 0;
}