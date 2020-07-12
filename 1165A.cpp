#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n, x, y;
	cin >> n >> x >> y;

	string s;
	cin >> s;	
	
	int count = 0;
	for (int i = s.size() - 1; i >= (s.size() - x); i--)
	{
		if (s[i] == '1' && (i != s.size() - y - 1))
			count++;

		else if (s[i] == '0' && (i == s.size() - y - 1))
			count++;
	}

	cout << count << endl;

	return 0;
}