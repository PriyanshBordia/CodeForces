#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int left = 0;
	int right = 0;

	while (n--)
	{
		int x, y;
		cin >> x >> y;

		if (x > 0)
			right++;

		else
			left++;
	}

	(left <= 1 || right <= 1) ? cout << "Yes" << endl : cout << "No" << endl;

	return 0;
}