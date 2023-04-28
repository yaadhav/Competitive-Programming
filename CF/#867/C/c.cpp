// Q : https://codeforces.com/contest/1822/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        ll n;
        cin >> n;

        ll sum=(n*(n-1))/2;

        cout << 2*(sum+1)+(n*3) << endl;              
    } 
    
    return 0;
}