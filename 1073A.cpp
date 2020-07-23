#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int isDiverse(string r)
{
	int num[26] = { 0 };
	for (int i = 0; i < r.size(); i++)
		num[r[i] - 'a']++;

	return (*max_element(num, num + 26) <= (r.size() / 2)) ? 1 : 0;
}

int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	for (int i = 2; i <= n; ++i)
	{
		for (int j = 0; j <= n - i; j++)
		{
			string t = s.substr(j, i);

			if (isDiverse(t))
			{
				cout << "YES\n" << t << endl;
				return 0;
			}
		}
	}

	printf("NO\n");
	return 0;
}