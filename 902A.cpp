#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	set<int> maps;

	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;

		for (int j = x + 1; j <= y; j++)
			maps.insert(j);
	}

	int flag = 1;
	for (int i = 1; i <= m; i++)
	{
		if (maps.find(i) == maps.end())
			flag = 0;
	}

	(flag == 1) ? cout << "YES\n" : cout << "NO\n";

	return 0;
}
	