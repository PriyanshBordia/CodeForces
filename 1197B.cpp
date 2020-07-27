#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n; cin >> n;

	int max = 0;

	int a[n];
	for (int i = 0; i < n; i++)
	{ 
		cin >> a[i]; 

		if (a[i] > a[max])
			max = i;
	}
	
	int flag(1);

	for (int i = 0; i < max; i++)
	{
		if (a[i] >= a[i + 1])
		{
			flag = 0;
			break;
		}
	}

	for (int i = max; i < n - 1; i++)
	{
		if (a[i] <= a[i + 1])
		{
			flag = 0;
			break;
		}
	}

	(flag == 1) ? printf("YES\n") : printf("NO\n");
}