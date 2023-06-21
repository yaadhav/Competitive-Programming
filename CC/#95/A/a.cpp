// Q : https://www.codechef.com/problems/TRANCHAIN

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int n;
        cin >> n;
        
        string temp;
        int a=0, b=0, o=0, ab=0;
        
        for( int i=0; i<n; i++)
        {
            cin >> temp;
            if(temp=="O")
                o++;
            else if(temp=="A")
                a++;
            else if(temp=="B")
                b++;
            else
                ab++;

        }
        
        int max=o+a+ab;
        if(o+b+ab>max)
            max=o+b+ab;

        cout << max << endl;            
    }
    return 0;
}

