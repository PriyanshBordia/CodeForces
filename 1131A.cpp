#include <iostream>

using namespace std;

int main()
{
	int w1, h1, w2, h2;
	scanf("%d %d %d %d", &w1, &h1, &w2, &h2);

	cout << (w1 + 2 + 2 * h1 + w2 + 2 + 2 * h2 + w1 - w2) << endl;
	return 0;
}