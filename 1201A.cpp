#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int ans[m][5];

	for (int j = 0; j < m; j++){ ans[j][0] = 0; ans[j][1] = 0; ans[j][2] = 0; ans[j][3] = 0; ans[j][4] = 0; }
	
	for (int i = 0; i < n; i++) 
	{
		string s;
		cin >> s;
				
		for (int j = 0; j < m; j++){ ans[j][s[j] - 'A'] += 1; }
	}

	int scores[m];
	for (int i = 0; i < m; i++){ scanf("%d", &scores[i]); }

	int score = 0;
	for (int i = 0; i < m; ++i)
	{ 
		int temp = max(ans[i][0], ans[i][1]);
		temp = max(temp, ans[i][2]);
		temp = max(temp, ans[i][3]);
		temp = max(temp, ans[i][4]);

		score += scores[i] * temp;
	}

	cout << score << endl;

	return 0;
}