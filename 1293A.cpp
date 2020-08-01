#include <iostream>
#include <algorithm>
#include <set>

typedef long long ll;

using namespace std;

void solve()
{
	int n, s, k; cin >> n >> s >> k;

	set<int> st;

	for (int i = 1; i <= k; i++)
	{ 
		int x; cin >> x;

		st.insert(x); 
	}

	int i = s;
	while (st.find(i) != st.end() && i > 0) i--; 

	int j = s;
	while (st.find(j) != st.end() && j <= n) j++;
	
	if (i == 0)
		cout << j - s << endl;

	else if (j == (n + 1))
		cout << s - i << endl;
	
	else
		cout << min(abs(s - i), abs(j - s)) << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--){ solve(); }

	return 0;
}