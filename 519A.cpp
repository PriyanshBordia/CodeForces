#include <iostream>
#include <ctype.h>
#include <map>

using namespace std;

map<char, int> create_map()
{
	map<char, int> m;

	m['q'] = 9; 
	m['r'] = 5;
	m['b'] = 3;
	m['n'] = 3;
	m['p'] = 1;
	m['k'] = 0;

	return m; 
}

int main()
{
	map<char, int> pieces = create_map();

	int A(0), B(0);

	char board[8][8];
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			cin >> board[i][j];

			char c = board[i][j];
			
			if (c != '.')
			{
				if (isupper(c))
					A += pieces[tolower(c)];

				else
					B += pieces[c];
			}
		}
	}

	if (A == B)
		cout << "Draw\n";

	else if (A > B)
		cout << "White\n";
	
	else
		cout << "Black\n";
	
	return 0;
}