#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n, k; cin >> n >> k;

	int cnt[101];
	for (int i = 0; i < 101; ++i) 
		cnt[i] = 0;

	for (int i = 0; i < n; i++) 
	{
		string s; cin >> s;
		cnt[s.size()]++;
	}

	string pass; cin >> pass;

	for (int i = 1; i <= 100; i++)
	{
		cnt[i] += cnt[i - 1];
	}

	int mn = 5 * (cnt[pass.size() - 1] / k) + cnt[pass.size() - 1] + 1;
	int mx = 5 * ((cnt[pass.size()] - 1) / k) + cnt[pass.size()];
	

	cout << mn << " " << mx << endl;

	return 0;
}