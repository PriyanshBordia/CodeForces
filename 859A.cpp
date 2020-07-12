#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int max = 0;

	for (int i = 0; i < n; i++)
	{
		int r;
		cin >> r;  
		
		if (r > max)
			max = r;
	}

	int count = max - 25;

	(count < 0)	? cout << "0" << endl : cout << count << endl;
	
	return 0;
}

