#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	while (n--)
	{
		int x;
		cin >> x;

		int flag = 0;
		for (int i = x / 7; i >= 0; i--)
		{
			if ((x - (7 * i)) % 3 == 0)
			{
				flag = 1;
				break;
			}
		}
		
		(flag) ? printf("YES\n") : printf("NO\n");
	}

	return 0;
}