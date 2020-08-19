#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;

	int iL(0), iR(0), mxL(0), mxR(0), sumL(0), sumR(0);
	while (n--)
	{
		int l, r; cin >> l >> r;

		if (r > mxR)
		{
			mxR = r;
			iR = i + 1; 
		}

		if (l > mxL)
		{
			mxL = l;
			iL = i + 1;
		}

		sumL += l;
		sumR += r;
	}

	if (sumR > sumL && mxL > mxR)
		cout << iR << endl;

	else if (sumL > sumR && ) 

	return 0;	
}