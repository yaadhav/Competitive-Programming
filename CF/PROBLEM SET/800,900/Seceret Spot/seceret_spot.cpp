// Q : https://codeforces.com/contest/1894/problem/A

#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
int main()
{
    ll t;
    cin >> t;
 
    while(t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        
        cout << s[n-1] << endl;
    }   
 
    return 0;
}