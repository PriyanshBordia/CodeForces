#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string digits[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	string no[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };

	string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
	
	int k = n / 10;
	int l = n % 10;

	if (k == 0)
		cout << digits[l] << endl;
	
	else if (k == 1)
	{
		cout << no[l] << endl;
	}

	else
	{
		if (l == 0)
		{
			cout << tens[k] << endl;
		}

		else 
		{
			cout << tens[k];

			if (l != 0)
				cout << "-" << digits[l] << endl;
		}
	} 

	return 0;
}