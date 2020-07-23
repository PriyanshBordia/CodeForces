#include <iostream>
#include <cstring>
#include <set>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	string s;
	cin >> s;

	int in[26] = { 0 };
	int out[26] = { 0 };

	for (int i = 0; i < n; i++)
	{
		if (in[s[i] - 'A'] == 0)
			in[s[i] - 'A'] = i + 1;
		
		out[s[i] - 'A'] = i + 1;
	}

	int flag = 1;
	
	set<char> v;

	for (int j = 0; j < n; j++)
	{
		if (in[s[j] - 'A'] == (j + 1))
			v.insert(s[j]);

		if (v.size() > k)
		{
			flag = 0;
			break;
		}

		if (out[s[j] - 'A'] == (j + 1))
			v.erase(s[j]);
	}

	(flag == 0) ? printf("YES\n") : printf("NO\n");

	return 0;
}
