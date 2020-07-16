#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, w, k;
	cin >> k >> n >> w;


	int sum = (w * (w + 1) / 2) * k;

	cout << max(0, sum - n) << endl;

}