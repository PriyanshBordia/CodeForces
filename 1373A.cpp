#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);

		(a < c) ? printf("1 ") : printf("-1 ");

		(c < (a * b)) ? printf("%d\n", b) : printf("-1\n");
	} 

	return 0;
}