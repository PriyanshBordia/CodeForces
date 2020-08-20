#include <iostream>

using namespace std;

int isVowel(char c)
{
	if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') 
		return 1;
	
	else
		return 0;
}

int main()
{
	string s; cin >> s;

	int ans(0), cnt(0);
	for (int i = 0; i < s.size(); i++)
	{
		if (isVowel(s[i]))
		{
			ans = max(ans, cnt + 1);
			cnt = 0;
		}

		else 
			cnt++;
	}

	ans = max(ans, cnt + 1);

	cout << ans << endl;

	return 0;
}