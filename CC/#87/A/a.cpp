// Q : https://www.codechef.com/problems/RETURNCHANGE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int x;
        cin >> x ;

        x+=5;
        x=(x/10)*10;
        cout << 100-x << endl;
    }
    return 0;
}

