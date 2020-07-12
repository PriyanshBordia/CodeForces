#include <iostream>

using namespace std;

int main()
{
	int w, h, k;
	scanf("%d %d %d", &w, &h, &k);

	int ans = 0;
	while (k--)
	{
		ans += 2 * (w + h - 2);
		w -= 4;
		h -= 4;
	}

	cout << ans << endl;
	
	return 0;
}