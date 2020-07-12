#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(string k)
{
	for (int i = 0; i < k.size() / 2; i++)
	{
		if (k[i] != k[k.size() - i - 1])
			return false;
	}

	return true;
}

int main()
{
	string s;
	cin >> s;

	string t;
	for (int i = 0; i <= s.size(); i++)
	{
		t = s;
		t.insert(i, "a");

		t[i] = t[s.size() - i];

		if (isPalindrome(t))
		{
			cout << t << endl;
			return 0;
		}
	}

	cout << "NA" << endl;
	return 0;
}

// insert char 'a' at i'th location and then replace it with size - i th char.
// if isPalindrome print string else NA}