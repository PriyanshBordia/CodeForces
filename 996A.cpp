#include <iostream>

using namespace std;

int main()
{
    int cash;
    cin >> cash;
    
    int count = 0;
    
    while (1)
    {
        if (cash / 100 != 0)
        {
            count += cash / 100;
            cash = cash % 100;
        }
        
        else if (cash / 20 != 0)
        {
            count += cash / 20;
            cash = cash % 20;
        }
        
        else if (cash / 10 != 0)
        {
            count += cash / 10;
            cash = cash % 10;
        }
        
        else if (cash / 5 != 0)
        {
            count += cash / 5;
            cash = cash % 5;
        }
        
        else
        {
            count += cash;
            break;
        }
    }
    
    cout << count << endl;
}
