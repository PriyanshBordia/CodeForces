#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, k; cin >> n >> k;

	int b[k + 1];

	int set = ceil((n * 1.0 ) / 2);

	int a[n];
	for (int i = 1; i <= k; i++)
		b[i] = 0;

	for (int i = 0; i < n; i++)
	{ 
		cin >> a[i]; 
		b[a[i]] += 1;
	}  

	int indi(0), pair(0);

	for (int i = 1; i <= k; i++)
	{
		if (b[i] & 1)
			indi++;

		pair += b[i] / 2;
	}
	
	int stud = min(set * 2, pair * 2);

	set = max(0, set - pair);

	stud += min(set, indi);

	cout << stud << endl;

	return 0;
}