#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int flag = 0;

	while (n--)
	{
		string s;
		int before = 0, after = 0;

		cin >> s >> before >> after;

		if (before >= 2400 && (after - before) > 0)
			flag = 1;
	}
	
	(flag) ? cout << "YES" << endl : cout << "NO" << endl;
	
	return 0;
}