#include <iostream>
#include <ctype.h>
#include <assert.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	char s[2 * n - 2 + 1];
	for (int i = 0; i < 2 * n - 2; ++i)
	{
		cin >> s[i];
	}

	s[2 * n - 2] = '\0';

	int alpha[26];

	for (int i = 0; i < 26; ++i)
	{
		alpha[i] = 0;
	}

	int keys = 0;

	for (int i = 0; i < 2 * n - 2; i += 2)
	{
		alpha[s[i] - 'a']++;

		if (alpha[s[i + 1] - 'A'] == 0)
			keys++;

		else	
			alpha[(s[i + 1] - 'A')]--;
	}
		
	cout << keys << endl;

	return 0;
}