#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int count_Vasya = 0;
	long long int count_Petya = 0;
	
	int n;
	cin >> n;

	int buff[n + 1];

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		buff[a[i]] = i + 1;
	}


	int m;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int q;
		cin >> q;

		count_Vasya += buff[q];
		count_Petya += n - buff[q] + 1;
	}

	cout << count_Vasya << " " << count_Petya << endl;

	return 0;
}
