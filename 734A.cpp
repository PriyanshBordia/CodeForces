#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string a;
	cin >> a;

	int A = count(a.begin(), a.end(), 'A');

	int D = count(a.begin(), a.end(), 'D');

	if (A == D)
		cout << "Friendship\n";

	else if (A > D)
		cout << "Anton\n";

	else
		cout << "Danik\n";

	return 0;
}