#include <iostream>

using namespace std;

int main()
{
	char tic[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cin >> tic[i][j];
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (tic[i][j] == 'x')
			{
				if ((i + 1 < 4) && tic[i + 1][j] == 'x')
				{
					if ((i + 2 < 4) && (tic[i + 2][j] == '.' || tic[i + 2][j] == 'x'))
					{
						cout << "YES" << endl;
						return 0;
					}
				}

				else if ((i + 1 < 4) && tic[i + 1][j] == '.')
				{
					if ((i + 2 < 4) && tic[i + 2][j] == 'x')
					{
						cout << "YES" << endl;
						return 0;
					}
				}

				if ((j + 1 < 4) && tic[i][j + 1] == 'x')
				{
					if ((j + 2 < 4) && (tic[i][j + 2] == '.' || tic[i][j + 2] == 'x'))
					{
						cout << "YES" << endl;
						return 0;
					}
				}

				else if ((j + 1 < 4) && tic[i][j + 1] == '.')
				{
					if ((j + 2 < 4) && tic[i][j + 2] == 'x')
					{
						cout << "YES" << endl;
						return 0;
					}
				}

				if ((i + 1 < 4) && (j + 1 < 4) && tic[i + 1][j + 1] == 'x')
				{
					if ((i + 2 < 4) && (j + 2 < 4) && (tic[i + 2][j + 2] == '.' || tic[i + 2][j + 2] == 'x')) 
					{
						cout << "YES" << endl;
						return 0;
					}	
				}

				else if ((i + 1 < 4) && (j + 1 < 4) && tic[i + 1][j + 1] == '.')
				{
					if ((i + 2 < 4) && (j + 2 < 4) && tic[i + 2][j + 2] == 'x')
					{
						cout << "YES" << endl;
						return 0;
					}	
				}

				if ((i + 1 < 4) && (j - 1 >= 0) && tic[i + 1][j - 1] == 'x')
				{
					if ((i + 2 < 4) && (j - 2 >= 0) && (tic[i + 2][j - 2] == '.' || tic[i + 2][j - 2] == 'x')) 
					{
						cout << "YES" << endl;
						return 0;
					}	
				}
 
				else if ((i + 1 < 4) && (j - 1 >= 0) && tic[i + 1][j - 1] == '.')
				{
					if ((i + 2 < 4) && (j - 2 >= 0) && tic[i + 2][j - 2] == 'x')
					{
						cout << "YES" << endl;
						return 0;
					}	
				}

				if ((i - 1 >= 0) && tic[i - 1][j] == 'x')
				{
					if ((i - 2 >= 0) && (tic[i - 2][j] == 'x' || tic[i - 2][j] == '.'))
					{
						cout << "YES" << endl;
						return 0;
					}
				}

				else if ((i - 1 >= 0) && tic[i - 1][j] == '.')
				{
					if ((i - 2 >= 0) && tic[i - 2][j] == 'x')
					{
						cout << "YES" << endl;
						return 0;
					}
				}

				if ((i - 1 >= 0) && (j - 1 >= 0) && tic[i - 1][j - 1] == 'x')
				{
					if ((i - 2 >= 0) && (j - 2 >= 0) && (tic[i - 2][j - 2] == 'x' || tic[i - 2][j - 2] == '.'))
					{
						cout << "YES\n";
						return 0; 
					}
				}

				else if ((i - 1 >= 0) && (j + 1 < 4) && tic[i - 1][j + 1] == '.')
				{
					if ((i - 2 >= 0) && (j + 2 < 4) && tic[i - 2][j + 2] == 'x')
					{
						cout << "YES\n";
						return 0;
					}
				}

				if ((i - 1 >= 0) && (j + 1 < 4) && tic[i - 1][j + 1] == 'x')
				{
					if ((i - 2 >= 0) && (j + 2 < 4) && (tic[i - 2][j + 2] == '.' || tic[i - 2][j + 2] == 'x'))
					{
						cout << "YES\n";
						return 0; 
					}
				}

				else if ((i - 1 >= 0) && (j + 1 < 4) && tic[i - 1][j + 1] == '.')
				{
					if ((i - 2 >= 0) && (j + 2 < 4) && tic[i - 2][j + 2] == 'x')
					{
						cout << "YES\n";
						return 0;
					}
				}

				if ((j - 1 >= 0) && tic[i][j - 1] == 'x')
				{
					if ((j - 2 >= 0) && (tic[i][j - 2] == 'x' || tic[i][j - 2] == '.'))
					{
						cout << "YES\n";
						return 0; 
					}
				}

				else if ((j - 1 >= 0) && tic[i][j - 1] == '.')
				{
					if ((j - 2 >= 0) && tic[i][j - 2] == 'x')
					{
						cout << "YES\n";
						return 0;
					}
				}
			}
		}
	}

	cout << "NO" << endl;

	return 0;
}
