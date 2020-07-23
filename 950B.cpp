#include <iostream>
#include <vector>

typedef long l;
typedef long long ll;

using namespace std;

int main()
{
	l n, m;
	cin >> n >> m;

	vector<l> x(n + 1, 0);
	for (int i = 1; i <= n; i++){ int u; cin >> u; x[i] = x[i - 1] + u; }


	vector<l> y(m + 1, 0);
	for (int i = 1; i <= m; i++){ int u; cin >> u; y[i] = y[i - 1] + u; }

	l cnt(0), indx(1), indy(1);
	
	while (indx <= n && indy <= m)
	{
		if (x[indx] == y[indy]){ ++indx; ++indy; ++cnt; }
		else if (x[indx] < y[indy]){ ++indx; }
		else { ++indy; }
	}
	
	printf("%ld\n", cnt);

	return 0;
}
