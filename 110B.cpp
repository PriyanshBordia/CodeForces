#include <iostream>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i ++)
	{
		int j = i % 4;
		printf("%c", char('a' + j));
	} 

	printf("\n");
	return 0;
}