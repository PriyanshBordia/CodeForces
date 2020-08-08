#include <iostream>

using namespace std;

int main()
{
	int cnt1, cnt2, cnt3, cnt4; cin >> cnt1 >> cnt2 >> cnt3 >> cnt4;

	if (cnt3 != 0 && cnt1 == 0 && cnt4 == 0)
		cout << "0\n";

	else if (cnt1 == cnt4) 
		cout << "1\n";

	else
		cout << "0\n";

	return 0;
}