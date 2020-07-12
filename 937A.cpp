#include <iostream>
#include <set>

#define sc(x) scanf("%d", &x);

#define pf(x) printf("%d\n", x);

using namespace std;

int main()
{
	int n;
	sc(n);

	set<int> a;

	for (int i = 0; i < n ; i++)
	{ 
		int x;
		sc(x); 

		if (x != 0)
			a.insert(x);
	}
	
	pf(a.size());

	return 0;
}