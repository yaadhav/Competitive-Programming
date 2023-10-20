#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        ll a1=a, b1=b, n1=n;
        a1-=n1;
        a1= a1>=x ? a1:x;
        n1-=a-a1;
        b1-=n1;
        b1= b1>=y ? b1:y;

        ll a2=a, b2=b, n2=n;
        b2-=n2;
        b2= b2>=y ? b2:y;
        n2-=b-b2;
        a2-=n2;
        a2= a2>=x ? a2:x;

        if( a1*b1<a2*b2 )
            cout << a1*b1 << endl;
        else
            cout << a2*b2 << endl;
    }
    return 0;
}