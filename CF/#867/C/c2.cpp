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

        ll sum=(n*n)+(2*(n+1));

        cout << sum << endl;              
    } 
    
    return 0;
}