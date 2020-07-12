#include <iostream>
#include <algorithm>

using namespace std;

long long int fact(long long int x)
{
	if (x == 1)
		return 1;
	else
		return fact(x - 1) * x;
}

int main()
{
	long long int A, B;
	cin >> A >> B;

	cout << fact(min(A, B)) << endl;

	return 0;
}