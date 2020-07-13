#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	list<int> cafes;

	for (int i = 0; i < n; i++)
	{ 
		int x;
		cin >> x;

		if (find(cafes.begin(), cafes.end(), x) == cafes.end())
			cafes.push_back(x);

		else
		{
			cafes.remove(x);
			cafes.push_back(x);
		}
	}

	cout << cafes.front() << endl;

	return 0;
}