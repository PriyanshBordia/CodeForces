#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int arr[26] = { 0 };

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
		arr[s[i] - 'a']++;

	for (int i = 0; i < 26; ++i)
	{
		if (arr[i] > k)
		{
			printf("NO\n");
			return 0;
		}
	}

	printf("YES\n");

	return 0;
}