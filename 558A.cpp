#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

typedef long long ll;

#define sc(x) scanf("%d", &x);
#define pf(x) printf("%d\n", x);

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int main()
{
	int n;
	sc(n)

	vector<int> left;
	vector<int> right;

	int apples = 0;

	for (int i = 0; i < n; i++)
	{ 
		int x, a;
		scanf("%d %d", &x, &a);  

		(x < 0) ? left.push_back(a) : right.push_back(a);
	}

	if (right.size() < left.size())
	{
		apples += accumulate(right.begin(), right.end(), 0);

		apples += accumulate(left.begin(), left.begin() + right.size() + 1, 0);
	}

	else if (right.size() > left.size())
	{
		apples += accumulate(left.begin(), left.end(), 0);

		apples += accumulate(right.begin(), right.begin() + left.size() + 1, 0);
	}

	else
	{
		apples += accumulate(left.begin(), left.end(), 0);

		apples += accumulate(right.begin(), right.begin() + left.size() + 1, 0);
	}

	printf("%d\n", apples);
	
	return 0;
}