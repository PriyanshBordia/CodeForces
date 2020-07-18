#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	vector<int> v;

	while (b > a)
	{
		v.insert(v.begin(), b);

		if (b % 2 == 0)
			b /= 2;

		else
		{
			if ((b - 1) % 10 == 0)
				b = (b - 1) / 10;	
			
			else
				break;
		}
	}

	v.insert(v.begin(), a);

	if (b == a)
	{
		cout << "YES\n" << v.size() << endl;

		for (auto it = v.begin(); it != v.end(); it++)
			cout << *it << " ";

		cout << endl;
	}

	else
		cout << "NO\n";

	

	return 0;
}