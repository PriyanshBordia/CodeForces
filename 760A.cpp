#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int m, d;
	cin >> m >> d;

	int months[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	int ans = ceil((months[m] - (8 - d)) / 7.0) + 1;

	cout << ans << endl;
	return 0;
}