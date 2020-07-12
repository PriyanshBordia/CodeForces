#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string name;
	cin >> name;

	int count = 0;

	int d = name.find("Danil");
	if (d != string::npos)
	{
		count++;

		if (name.size() - d > 9)
		{
			if (name.find("Danil", d + 5) != string::npos)
				count++;
		}
	}
	
	int o = name.find("Olya");
	if (o != string::npos)
	{
		count++;

		if (name.size() - o > 7)
		{
			if (name.find("Olya", o + 4) != string::npos)
				count++;
		}
	}

	int s = name.find("Slava");
	if (s != string::npos)
	{
		count++;

		if (name.size() - s > 9)
		{
			if (name.find("Slava", s + 5) != string::npos)
				count++;
		}
	}
	
	int a = name.find("Ann");
	if (a != string::npos)
	{
		count++;

		if (name.size() - a > 5)
		{
			if (name.find("Ann", a + 3) != string::npos)
				count++;
		}
	}
	
	int n = name.find("Nikita");
	if (n != string::npos)
	{
		count++;

		if (name.size() - n > 11)
		{
			if (name.find("Nikita", n + 6) != string::npos)
				count++;
		}
	}

	if (count == 1)
		printf("YES\n");

	else
		printf("NO\n");

	return 0;
}