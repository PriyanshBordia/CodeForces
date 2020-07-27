#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;

	int h[n + 1];
	int v[n + 1];
	
	for (int i = 1; i <= n; ++i)
	{
		h[i] = v[i] = 1;
	}

	for (int i = 1; i <= n * n; i++)
	{ 
		int x, y; cin >> x >> y; 

		if (h[x] == 1 && v[y] == 1)
		{
			h[x] = -1;
			v[y] = -1;

			cout << i << " ";
		}
	}

	cout << endl;
	return 0;
}