#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);

	string s;
	cin >> s;

	if (n < k)
		cout << "-1" << endl;

	sort(s.begin(), s.end());

	int count = 1;

	int w = int(s[0] - 'a') + 1;
	char c = s[0];

	for (int i = 1; i < n; ++i)
	{
		if (int(s[i] - c) > 1)
		{
			if (count == k)
				break;
			count++;

			c = s[i];

			w += int(s[i] - 'a') + 1;
		}
	}

	if (count == k)
		cout << w << endl;

	else
		cout << "-1" << endl;
}

