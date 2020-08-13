#include <iostream>
#include <cstring>
#include <algorithm>

#define red printf("red\n")
#define cyan printf("cyan\n")

using namespace std;

void solve()
{
	string y; cin >> y;

	// while (y[0] == '0' && y.size() > 0)
	// 	y.erase(y.begin());

	
	int sum(0);
	for (int i = 0; i < y.size(); ++i)
		sum += (y[i] - '0');
	
	if (sum % 3 == 0)
	{
		sum = count(y.begin(), y.end(), '8') + count(y.begin(), y.end(), '6') + count(y.begin(), y.end(), '4') + count(y.begin(), y.end(), '2');
		
		if (count(y.begin(), y.end(), '0') >= 2)
			red;

		else if (count(y.begin(), y.end(), '0') >= 1 && sum >= 1)
			red;
		
		else
			cyan;
	}

	else
		cyan;

	return;
}

int main()
{
	int n; cin >> n;

	while (n--)
		solve();

	return 0;
}