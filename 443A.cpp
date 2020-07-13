#include <iostream>
#include <set>
#include <cstring>
#include <ctype.h>

using namespace std;

int main()
{
	string s;
	getline(cin, s);

	set<char> set;

	int i = 0;
	while (i < s.size())
	{
		char c = s[i++];

		if (isalpha(c))
			set.insert(c);
	}

	cout << set.size() << endl;
}