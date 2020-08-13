#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;

	int cnt(0);
	for (int i = 0; i < n; i++) 
	{ 
		int x; cin >> x; 
		
		if (x & 1) 
			cnt++;
	}

	(cnt >= 1) ? cout << "First\n" : cout << "Second\n";

	return 0;
}
