#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b , c;
	cin >> a >> b >> c;

	cout << 7 * min(a, min(b / 2, c / 4)) << endl;
	
	return 0;
}