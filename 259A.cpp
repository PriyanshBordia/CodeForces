#include <iostream>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

int main()
{
	char chess[8][8];

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; ++j)
		{
			cin >> chess[i][j];
		}
	}
	
	int flag(0);
		
	for (int i = 0; i < 8; ++i)
	{
	 	for (int j = 0; j < 7; j++)
	 	{
	 		if (chess[i][j] == chess[i][j + 1])
	 		{
	 			flag = 1;
	 			break;
	 		}
	 	}

	 	if (flag)
	 		break;
	 } 

	(!flag) ? yes : no;

	return 0;
}
