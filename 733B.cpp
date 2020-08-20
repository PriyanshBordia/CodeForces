#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int n; cin >> n;

	int l[n], r[n]; for (int i = 0; i < n; i++) { cin >> l[i] >> r[i]; }

	int index(0), mxL(0), mxR(0), sumL(0), sumR(0);

	sumL = accumulate(l, l + n, 0);
	sumR = accumulate(r, r + n, 0);

	for (int i = 0; i < n; i++)
	{
		if (abs(sumL - sumR - 2 * (l[i] - r[i]) + 2 * (mxL - mxR)) > abs(sumL - sumR))
		{
			index = i + 1;

			sumL += mxL; sumR += mxR;
			sumL -= mxR; sumR -= mxL;

			mxL = l[i]; mxR = r[i]; 

			sumL -= l[i]; sumR -= r[i];
			sumL += r[i]; sumR += l[i];
		}
	}

	cout << index << endl;

	return 0;	
}