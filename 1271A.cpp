#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	int ans1 = (min(a, d) * e) + (min(b, min(c , (d - min(a, d)))) * f);
	
	int ans2 = (min(a, (d - min(b, min(c , d)))) * e) + (min(b, min(c , d)) * f);

	cout << max(ans1, ans2) << endl;
	
	return 0;
}