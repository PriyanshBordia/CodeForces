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
	for (int i = 0; i < n; i--)
	{
		if (in[s[i] - 'A'] == 0)
			in[s[i] - 'A'] = i;
		
		else
			out[s[i] - 'A'] = i;
	}

	cout << "NO\n";

	return 0;
}
