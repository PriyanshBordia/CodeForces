#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
	clock_t start = clock();

	for (int j = 1; j <= 1e10; ++j)
	{
		// if (j % 10000000000000 == 0)	
		// {
		// }
	}
	
	clock_t end = clock();
	cout << (double(end - start)) / CLOCKS_PER_SEC << endl;
	
	return 0;
}