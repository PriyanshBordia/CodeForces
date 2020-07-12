#include <iostream>
#include <cstring>
#include <set>

using namespace std;

int main()
{
	int n;
	cin >> n;

	map<string, string> Handles;

	while (n--)
	{
		string oldH;
		cin >> oldH;

		string newH;
		cin >> newH;

		int flag = 0;
		for (auto it = Handles.begin(); it != Handles.end(); it++)
		{
			if (it->second == oldH)
			{
				it->second = newH;
				flag = 1;
				break;
			}
		}

		if (!flag)
		{
			Handles.insert({ oldH, newH });
		}
	}

	cout << Handles.size() << endl;

	for (auto i = Handles.begin(); i != Handles.end(); i++)
			cout << i->first << " " << i->second << endl;

	return 0;
}