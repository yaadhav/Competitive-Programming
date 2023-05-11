// Q : https://www.codechef.com/problems/POSITNEG

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        int n;
        cin >> n;

        int temp, neg=0;

        for( int i=1; i<=n; i++)
        {
            cin >> temp;

            if(temp<0)
                neg+=i;
        }

        int tot=(n*(n+1))/2;
        cout << abs(tot-(2*neg)) << endl;
    } 
    
    return 0;
}

