#include <iostream>
#include <cstring>

typedef long long ll;

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		ll a, K; cin >> a >> K;

		while (K > 1)
		{
			string s = to_string(a);

			int max(0), min(9);
			for (int i = 0; i < s.size(); i++)
			{
				int n = s[i] - '0';

				if (n > max)
					max = n;

				if (n < min)
					min = n;
			}

			if (min == 0)
				break;

			else
				a += min * max;

			K--; 	
		}

		cout << a << endl;
	}

	return 0;
}