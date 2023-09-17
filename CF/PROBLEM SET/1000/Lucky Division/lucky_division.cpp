// Q : https://codeforces.com/problemset/problem/122/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> lucky={ 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int n; 
    cin >> n;

    string ans="NO";
    for( int i : lucky)
    {
        if( n%i==0 )
            ans="YES";
    }

    cout << ans << endl;
    
    return 0;
}
