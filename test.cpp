#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	int x = 123456;
	string s = to_string(x);
	cout << s.size() << endl;

	return 0;
}
