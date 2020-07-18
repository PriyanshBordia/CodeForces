#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int count = 0;

	int left = 0;
	int right = 0;
	int up = 0;
	int down = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'L')
			left++;

		else if (s[i] == 'R')
			right++;
		
		else if (s[i] == 'U')
			up++;

		else if (s[i] == 'D')
				down++;
	}	

	count = (abs(left - right) + abs(up - down)) / 2;  

	(s.size() % 2 == 0) ? printf("%d\n", count) : printf("-1\n");

	return 0;
}