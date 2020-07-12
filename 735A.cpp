#include <iostream>
#include <cstring>
#include <math.h>

#define sc(x) scanf("%d", &x);

using namespace std;

int main()
{
	int n, k;
	sc(n)
	sc(k)

	string s;
	cin >> s;

	int posT = 0;
	int posG = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'T')
			posT = i;

		else if (s[i] == 'G') 
			posG = i;

	}

	if (posG < posT)
	{
		for (int i = posG; i < posT; i += k)
		{
			if (s[i] == '#')
			{
				cout << "NO" << endl;
				return 0;
			}
		}	
	}

	else
	{
		for (int i = posG; i > posT; i -= k)
		{
			if (s[i] == '#')
			{
				cout << "NO" << endl;
				return 0;
			}
		}	
	}
	

	(abs(posG - posT) % k == 0) ? cout << "YES" << endl : cout << "NO" << endl;

	return 0;
}