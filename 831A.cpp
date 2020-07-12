#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

int main()
{
	string first;
	cin >> first;

	string second;
	cin >> second;

	string text;
	cin >> text;

	int First[26];
	int Second[26];
	for (int i = 0; i < 26; i++)
	{
		First[first[i] - 'a'] = i;
		// Second[second[i] - 'a'] = i;
	}

	for (int i = 0; i < text.size(); i++)
	{
		if (isdigit(text[i]));

		else if (islower(text[i]))
			text[i] = second[First[int(text[i] - 'a')]];

		else if (isupper(text[i]))
			text[i] = toupper(second[First[int(text[i] - 'A')]]);
	}

	cout << text << endl;

	return 0;
}