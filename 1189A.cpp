#include <iostream>
#include <cstring>
#include <assert.h>

using namespace std;

int isGood(string c)
{
	int odd = 0;
	int even = 0;

	for (int i = 0; i < c.size(); i++)
	{
		if (c[i] == '0')
			even++;

		else
			odd++;
	}

	return odd == even ? 0 : 1;
}

int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	if (isGood(s))
		cout << "1" << endl << s << endl;

	else
	{
		printf("2\n");
		
		for (int i = 0; i < s.size() - 1; i++)
			cout << s[i];

		printf(" %c\n", s[s.size() - 1]);
	}

	return 0;
}