#include <iostream>
#include <cstring>

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

		if ((to_int(s) & 1) && accumulate(s.begin(), s.end(), 0) % 2 == 0)
		{
			
		}
	}
	return 0;
}