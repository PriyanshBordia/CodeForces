#include <iostream>
#include <ctype.h>

#define LPAR '('
#define RPAR ')'

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	char arr[n + 1];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	arr[n] = '\0';
	
	int word_Count = 0;
	int longest_Word = 0;
	int word_length = 0;
	
	int i = 0;
	char c = arr[i];

	while (i < n)
	{
		if (c == LPAR)
		{
			// cout << i << " : (" << endl;

			i++;
			c = arr[i];  
			
			while (c != RPAR)  
			{
				if (isalpha(c) != 0)
				{
					word_Count++;

					while (isalpha(c) != 0)
					{
						// cout << i << " : " << c << endl;
						i++;
						c = arr[i];
					} 
				}

				else
				{
					i++;
					c = arr[i];
				}
			}

			// cout << i << " : ) " << word_Count << endl;
		}

		else if (isalpha(c) != 0)
		{
			// cout << i << " : " << c << endl;

			i++;
			c = arr[i];

			word_length = 1;

			while (isalpha(c) != 0)
			{
				// cout << i << " : " << c << endl;

				i++;
				c = arr[i];
				
				word_length++;
			}

			if (word_length > longest_Word)
				longest_Word = word_length;
		}

		else
		{
			i++;
			c = arr[i];
			// cout << i << " : _" << endl;
		}
	}

	cout << longest_Word << " " << word_Count << endl;
	return 0;
}