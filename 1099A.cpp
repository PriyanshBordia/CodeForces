#include <iostream>
#include <cstring>

typedef long long ll;

#define sc(x) scanf("%d", &x);
#define scll(x) scanf("%lld", &x);

#define pf(x) printf("%d\n", x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int main()
{
	int w, h;
	sc(w)
	sc(h)

	int u1, h1;
	sc(u1)
	sc(h1)

	int u2, h2;
	sc(u2)
	sc(h2)

	while (h > 0)
	{
		w += h;

		if (h == h1)
		{
			w -= u1;
			if (w < 0)
				w = 0;
		}

		else if (h == h2)
		{
			w -= u2;

			if (w < 0)
				w = 0;
		}

		h--;
	}

	cout << w << endl;

	return 0;
}
