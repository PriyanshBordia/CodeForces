#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	int n; cin >> n;

	map<int, int> a;
	for (int i = 0; i < n; i++) int x; cin >> x; a[x]++; 

	for (auto& i : a)
	{
		if (i.second & 1)
		{
			printf("Conan\n");
			return 0;
		}
	}
	
	printf("Agasa\n");

	return 0;
}
