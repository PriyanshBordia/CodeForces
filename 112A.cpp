#include <iostream>
#include <cstring>
#include <ctype.h>
#include <algorithm>

using namespace std;

int main()
{
	string a;
	cin >> a;

	transform(a.begin(), a.end(), a.begin(), ::toupper);


	string b;
	cin >> b;

	transform(b.begin(), b.end(), b.begin(), ::toupper);

	int ans = 0;

	if (a.compare(b) > 0)
		ans = 1;

	else if (a.compare(b) < 0)
		ans = -1;
	
	cout << ans << endl;

	return 0;
}