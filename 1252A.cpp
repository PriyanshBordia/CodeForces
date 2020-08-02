#include <iostream>

using namespace std;

int main()
{
	int N; cin >> N;

	int a[N];
	for (int i = 0; i < N; i++)
	{
		int x; cin >> x;

		a[i] = N - x + 1;
	}

	for (int i = 0; i < N; i++){ cout << a[i] << " ";}
	cout << endl;

	return 0;
}