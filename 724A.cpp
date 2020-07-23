#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string w;
	cin >> w;

	string v;
	cin >> v;

	if (w.compare(v) == 0)
		cout << "YES\n";

	else if (w.compare("saturday") == 0 && (v.compare("tuesday") == 0 || v.compare("monday") == 0))
		cout << "YES\n";

	else if (w.compare("sunday") == 0 && (v.compare("tuesday") == 0 || v.compare("wednesday") == 0))
		cout << "YES\n";

	else if (w.compare("monday") == 0 && (v.compare("wednesday") == 0 || v.compare("thursday") == 0))
		cout << "YES\n";

	else if (w.compare("tuesday") == 0 && (v.compare("friday") == 0 || v.compare("thursday") == 0))
		cout << "YES\n";

	else if (w.compare("wednesday") == 0 && (v.compare("friday") == 0 || v.compare("saturday") == 0))
		cout << "YES\n";

	else if (w.compare("thursday") == 0 && (v.compare("saturday") == 0 || v.compare("sunday") == 0))
		cout << "YES\n";	
	
	else if (w.compare("friday") == 0 && (v.compare("sunday") == 0 || v.compare("monday") == 0))
		cout << "YES\n";

	else 
		cout << "NO\n";

	return 0;
}