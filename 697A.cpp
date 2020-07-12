#include <iostream>

using namespace std;

int main()
{
	int t, s, x;
	scanf("%d %d %d", &t, &s, &x);

	if (x < t || (x - t == 1))
		printf("NO\n");
	
	else if (((x - t) % s == 0 || ((x - t) % s == 1) && x > s))
		printf("YES\n");

	else
		printf("NO\n");

	return 0;
}
