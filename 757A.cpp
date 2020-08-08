#include <iostream>
#include <cstring>
#include <map>
#include <set>

using namespace std;

int main()
{
	string s; cin >> s;

	map<char, int> freq;
	freq['a'] = 0;
	freq['b'] = 0;
	freq['l'] = 0;
	freq['s'] = 0;
	freq['r'] = 0;
	freq['u'] = 0;
	freq['B'] = 0;

	for (int i = 0; i < s.size(); ++i) { freq[s[i]]++; }

	freq['a'] /= 2; freq['u'] /= 2;

	set<char> alpha;

	alpha.insert('a');
	alpha.insert('b');
	alpha.insert('l');
	alpha.insert('r');
	alpha.insert('s');
	alpha.insert('u');
	alpha.insert('B');

	int mn(1e05);
	for (auto it = freq.begin(); it != freq.end(); it++)
	{
		if (it->second < mn && alpha.find(it->first) != alpha.end()) 
			mn = it->second;
	}

	cout << mn << endl;

	return 0;
}