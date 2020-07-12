#include <iostream>
#include <cstring>

using namespace std;

int compare(string t)
{
	for (int i = 0; i < t.size(); ++i)
	{
		if (t[i] != '1')
			return 0;
	}

	return 1;
}

int main()
{
	int n, d;
	cin >> n >> d;

	int consec = 0;
	int ans = 0;

	for (int i = 0; i < d; ++i)
	{
		string s;
		cin >> s;

		if (compare(s))
			consec = 0;

		else
			consec++;

		if (consec > ans)
			ans = consec;
	}

	cout << ans << endl;

	return 0;
}