#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, k; cin >> n >> k;

	int b[k + 1];

	int set = ceil((n * 1.0 ) / 2);

	int a[n];
	for (int i = 0; i < n; i++)
	{ 
		cin >> a[i]; 
		b[a[i]] += 1;
	}  

	int stud(0);
	
	int i = 1; 
	while (i <= k && set > 0)
	{
		cout << a[i] << " ";

		if (b[i] % 2 == 0)
		{
			set -= ceil((b[i] * 1.0) / 2);
			stud += b[i];
			b[i] = 0;
		}

		i++;
	}

	while (i <= 0)

	cout << stud << endl;

	return 0;
}