#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n; cin >> n;

	int max = 0;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{ 
		cin >> a[i]; 

		if (a[i] > a[max])
			max = i;
	}
	
	int flag(1);

	int i = max;
	while (i >= 0 && i < n && a.size() > 1)
	{
		cout << a[i] << " " << a.size() << endl;

		if (i - 1 >= 0 && a[i - 1] < a[i] && (i + 1) < n && a[i - 1] > a[i + 1])
		{
			auto it = a.begin();
			for (it = a.begin(); it != a.end(); it++)
			{
				if (*it == a[i])
					break;
			}
			i = i - 1;
			a.erase(it);
		}

		if (i + 1 < n && a[i + 1] < a[i])
		{
			auto it = a.begin();
			for (it = a.begin(); it != a.end(); it++)
			{
				if (*it == a[i])
					break;
			}

			a.erase(it);
			i = i + 1;
		}

		else
		{
			flag = 0;
			break;
		}
	}

	(flag == 1) ? printf("YES\n") : printf("NO\n");
}