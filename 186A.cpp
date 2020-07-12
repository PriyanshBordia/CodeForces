#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string s;
	cin >> s;

	string t;
	cin >> t;

	if (s.size() != t.size())
		printf("NO\n");

	else
	{
		int count = 0;
		int pos1 = 0;
		int pos2 = 0;

		int n = s.size();
		for (int i = 0; i < n; i++)
		{
			if (s[i] != t[i])
			{
				if (count == 0)
					pos1 = i;

				else
					pos2 = i;

				count++;
			}
		}

		if (count == 2)
		{
			if (s[pos1] == t[pos2] && s[pos2] == t[pos1])
				printf("YES\n");

			else
				printf("NO\n");
		}

		else
			printf("NO\n");
	}

	return 0;
}