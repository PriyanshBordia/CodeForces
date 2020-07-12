#include <iostream>
#include <ctype.h>
#include <assert.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, k;
	scanf("%d %d", &n, &k) ;
		
	for (int j= n; j > n - k; j--) { printf("%d ", j); }
	for (int i = 1; i <= n - k; ++i) { printf("%d ", i); }
	
	printf("\n");

	return 0;
}
