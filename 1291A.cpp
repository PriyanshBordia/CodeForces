#include <iostream>
#include <cstring>
#include <numeric>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		string s;
		cin >> s;

		if (n == 1)
			cout << "-1\n";

		else if ((s[n - 1] & 1) && accumulate(s.begin(), s.end(), 0) % 2 == 0)
		{
			cout << s << endl;	
		}

		else
		{
			while ((int)(s[s.size() - 1]) % 2 == 0 && s.size() > 0)
				s.erase(s.size() - 1);

			if (s.size() >= 1 && accumulate(s.begin(), s.end(), 0) % 2 != 0)
			{
				s.erase(s.size() - 1);
			}

			while ((int)(s[s.size() - 1]) % 2 == 0 && s.size() > 0)
				s.erase(s.size() - 1);

			(s.size() == 0) ? cout << "-1\n" : cout << s << endl;
		}
	}
	return 0;
}