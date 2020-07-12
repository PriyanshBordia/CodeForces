#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int visitor = 0;

		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);

		if (b > a){ int temp = a; a = b; b = temp;}
		
		if (c > a){ int temp = a; a = c; c = temp;}
		
		if (c > b){ int temp = c; c = b; b = temp;}

		// cout << a << " " << b << " " << c << endl;

		if (a > 0){ visitor++; a--; }

		if (b > 0){ visitor++; b--; }

		if (c > 0){ visitor++; c--; }

		if (a > 0 && b > 0){ visitor++; a--; b--;}

		if (a > 0 && c > 0){ visitor++; a--; c--;}

		if (c > 0 && b > 0){ visitor++; b--; c--;}

		if (a > 0 && b > 0 && c > 0){ visitor++; a--; b--; c--;}

		printf("%d\n", visitor);
	}

	return 0;
}
