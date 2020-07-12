#include <iostream>

using namespace std;

int main()
{
    int max = 0;
    int count = 1;

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i != 0)
        {
            if (arr[i] > arr[i - 1])
                count++;

            else
            {
                if (count > max)
                    max = count;
                
                count = 1;
            }
        }
    }    

    if (count > max)
        max = count;

    cout << max << endl;

    return 0;
}
