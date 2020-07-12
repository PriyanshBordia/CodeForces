#include <iostream>
#include <cstring>
#include <set>

using namespace std;

int main()
{	
	int n;
	cin >> n;
	
	set<string> names;

	while (n--)
	{
		string s;
		cin >> s;

		if (names.find(s) != names.end())
			cout << "YES" << endl;

		else
		{
			names.insert(s);
			cout << "NO" << endl;
		}
	}

	return 0;
}

