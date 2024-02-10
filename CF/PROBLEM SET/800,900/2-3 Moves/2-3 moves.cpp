#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;

        if( n!=1 )
            cout << (n+2)/3 << endl;
        else
            cout << 2 << endl;
    }   
 
    return 0;
}