#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sum=0;
    cin >> n;

    int j=n-1;
    for( int i=1; i<n; i++) {
            sum+=i*j;
            j--;
    }
    sum+=n;

    cout << sum ;

    return 0;
}
