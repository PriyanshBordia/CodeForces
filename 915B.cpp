#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, pos, l, r; cin >> n >> pos >> l >> r;

	if (l == 1 && r == n)
		cout << "0\n";
	
	else if (l == 1)
		cout << abs(r - pos) + 1 << endl;

	else if (r == n)
		cout << abs(pos - l) + 1 << endl;

	else if (pos > r)

	els
	else 
		cout << min(2 * abs(r - pos) + pos - l + 2, 2 * (pos - l) + r - pos + 2) << endl;

	return 0;
}