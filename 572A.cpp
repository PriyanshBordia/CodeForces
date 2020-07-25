#include <iostream>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

int main()
{
	int nA, nB; cin >> nA >> nB;

	int k, m; cin >> k >> m;

	int a[nA];
	for (int i = 0; i < nA; i++){ cin >> a[i]; }

	int b[nB];
	for (int i = 0; i < nB; i++){ cin >> b[i]; }


	(a[k - 1] < b[nB - m]) ? yes : no;

	return 0;
}