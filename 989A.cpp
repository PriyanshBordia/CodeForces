#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string a;
	cin >> a;

	if (a.size() < 3)
	{
		printf("NO\n");
		return 0;		
	}

	for (int i = 0; i < a.size() - 2; i++)
	{
		int count = int(a[i] - 'A') + int(a[i + 1] - 'A') + int(a[i + 2] - 'A');
		
		if (count == 3)
		{	
			if (a[i] == 'B' && a[i + 1] == 'B' && a[i + 2] == 'B')		
			{
				continue;
			}

			else
			{
				printf("YES\n");
				return 0;
			}
		}
	}

	printf("NO\n");
	return 0;
}