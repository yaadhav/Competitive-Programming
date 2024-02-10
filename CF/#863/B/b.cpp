#include <bits/stdc++.h>
using namespace std;

int Shell( int a, int b, int n)
{
    int ans, tot=n+1;

    a = a<tot-a ? a:tot-a;
    b = b<tot-b ? b:tot-b;

    ans = a<b ? a:b ;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        int n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;

        int p=Shell(x1, y1, n);
        int q=Shell(x2, y2, n);

        cout << abs(p-q) << endl;
    } 
    
    return 0;
}

