#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	int a[n];
	for (int i = 0; i < n; i++){ scanf("%d", &a[i]); }

	sort(a , a + n);
	printf("\n");
	if ((a[n - 1] < (a[n - 2] + a[n - 3]) ? 1 : 0))
	{
		printf("YES\n");
		int temp = a[n - 2];  a[n - 2] = a[n - 1]; a[n - 1] = temp;
		for (int i = 0; i < n; i++) { printf("%d ", a[i]); }
		printf("\n");
	}

	else { printf("NO\n"); }  
		
	
	return 0;
}

// te condition in if if satisfied will have desired solution