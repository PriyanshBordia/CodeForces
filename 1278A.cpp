#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		string p;
		cin >> p;

		string h;
		cin >> h;

		int flag = 1;

		if (h.size() < p.size())
			flag = 0;
		
		else
		{
			int a[26] = { 0 };
			for (int i = 0; i < p.size(); i++) { a[p[i] - 'a']++; }

			for (int i = 0; i <= (h.size() - p.size()); i++)
			{
				flag = 1;
				
				string r = h.substr(i, p.size());

				// cout << r << endl;

				int cnt[26] = { 0 };
				for (int j = 0; j < r.size(); j++){ cnt[r[j] - 'a']++; }

				for (int j = 0; j < 26; j++)
				{
					if (cnt[j] != a[j])
					{
						flag = 0;
						break;
					}
				}

				if (flag == 1)
					break;
			}
		}
			
		(flag) ? printf("YES\n") : printf("NO\n");
	}

	return 0;
}