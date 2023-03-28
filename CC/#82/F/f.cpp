// Q : https://www.codechef.com/problems/FIND_X

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
ll lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d ;

        if( (a+1)%b==(c+1)%d )
        {
            cout << 1 << endl;
            continue;
        }

        int max= b>d ? b:d;
        int min= b<d ? b:d;

        ll ans=lcm(max, min);

        cout << ans-(a%b) << endl ;     
        
    } 
    
    return 0;
}

