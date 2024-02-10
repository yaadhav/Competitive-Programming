// Q : https://codeforces.com/problemset/problem/405/A

#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<int> a(n);

    for( int &i : a)
        cin >> i;

    sort( a.begin(), a.end());
    
    for( int i: a)
        cout << i << " " ; 
    
    return 0;
}