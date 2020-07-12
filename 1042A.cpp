#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int m;
	cin >> m;

	int a[n];
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

		if (a[i] > max)
			max = a[i];
	}

	max += m;

	sort(a, a + n);

	while (m != 0)
	{
		a[0]++;
		m-- ;
		sort(a, a + n);
	}	

	int min = a[n - 1]; 

	cout << min << " " << max << endl;

	return 0;
}