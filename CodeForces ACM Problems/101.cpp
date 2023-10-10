#include<iostream>
using namespace std;

int main()
{
    struct cards
    {
        int a;
        int b;
    };

    int n;
    cin >> n;

    //domino input
    cards card[n];
    for (int i = 0; i < n; i++)
    {
        cin >> card[i].a >> card[i].b;
    }
    

}