#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n;
		scanf("%d", &n);
		
		int max = n / 2;

		printf("%d\n", max);
	}

	return 0;
}

