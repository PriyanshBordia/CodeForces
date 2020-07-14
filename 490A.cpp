#include <iostream>
#include <set>
#include <list>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	set<int> code;
	set<int> maths;
	set<int> PE;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		if (x == 1)
			code.insert(i + 1);

		else if (x == 2)
			maths.insert(i + 1);

		else
			PE.insert(i + 1);
	}

	int ans = min(code.size(), min(maths.size(), PE.size()));

	cout << ans << endl;

	while (ans--)
	{
		int a = *code.begin();
		int b = *maths.begin();
		int c = *PE.begin();

		code.erase(a);
		maths.erase(b);
		PE.erase(c);

		cout << a << " " << b << " " << c << endl; 
	}

	return 0;
}