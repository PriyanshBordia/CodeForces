#include <iostream>

using namespace std;

int main()
{
	char table[2];
	cin >> table[0] >> table[1];

	for (int i = 0; i < 5; i++)
	{
		char card[2];
		cin >> card[0] >> card[1];

		if (card[0] == table[0] || card[1] == table[1])
		{
			printf("YES\n");
			return 0;
		}
	}

	printf("NO\n");
}