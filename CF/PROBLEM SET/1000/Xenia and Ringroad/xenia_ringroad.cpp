// Q :https://codeforces.com/problemset/problem/339/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a, prev, ans;

    cin >> prev;
    ans=prev-1;

    while(--m)
    {
        cin >> a;

        if( a<prev )
            ans+=(n-prev+a);
        else
            ans+=a-prev;
        prev=a;
    }

    cout << ans ;

    return 0;
}