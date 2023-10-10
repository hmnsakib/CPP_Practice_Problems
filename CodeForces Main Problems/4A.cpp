#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin >> w;

    if (w >=1 && w <= 100)
    {
        if(w == 2)
        {
            cout << "NO\n";
            return 0;
        }
        else if (w % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}