#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	long long k; cin >> k;

	string s = "codeforces";

	cout << s;

	for (int i = 1; i <= (k - 1) / 2; i++)
		cout << "ss";
	
	if (k % 2 == 0)
		cout << 's';

	cout << endl;

	return 0;
}