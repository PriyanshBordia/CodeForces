#include <iostream>

using namespace std;

int main()
{
	int r1, r2, c1, c2;
	scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

	int rook = 2;
	if (r1 == r2 || c1 == c2)
		rook = 1;

	int bishop = 2;
	if ((r 1 - c 1 == r 2 - c 2) || (r 1 + c 1 = r 2 + c 2))
		bishop = 1;

	int king = 0;
	if (((c1 + 1 == c2 || c1 - 1 == c2) && (r1 + 1 == r2 || r1 - 1 == r2)) || (r1 == r2))
	cout << rook << " " << bishop << " " << king << endl;
	return 0;
}