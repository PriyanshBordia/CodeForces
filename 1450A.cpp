#include <iostream>
#include <cstring>

using namespace std;

void solve()
{
	int n; cin >> n;

	string s; cin >> s;

	int a[26]; 
	for (int i = 0; i < 26; ++i)
		a[i] = 0;
	
	for (int i = 0; i < n; i++)
	{
		a[s[i] - 'a']++;
	}

	for (int i = 0; i < 26; ++i)
	{
		string t(a[i], 'a' + i);
		cout << t;
	}

	cout << endl;
	
	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}