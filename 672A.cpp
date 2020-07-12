#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n;
	cin >> n;
 
 	int k = 0;

 	int a[n + 1];
 	for (int i = 1; i <= n; i++)
 	{
 		string t = to_string(i);

 		for (int j = 0; j < t.size(); j++)
 		{
 			a[k++] = t[j] - '0';
 			
 			if (k > n + 1)
 				break;
 		}

 		if (k > n + 1)
 			break;
 	}

 	cout << a[n - 1] << endl;
	
	return 0;
}
