// Q : https://www.hackerrank.com/challenges/angry-professor/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

string angryProfessor(int k, vector<int> a) {

    int count=0;
    for( int i=0; i<a.size(); i++)
    {
        if( a[i]<=0 )
            count++;
    }

    if( count>=k )
        return "NO";
    else
        return "YES";
}

int main()
{
    int t;
    cin >> t;
    
    while( t-- )
    {
        int n, k;
        cin >> n >> k;

        vector<int> a;
        int temp;

        for( int i=0; i<n; i++)
        {
            cin >> temp ;
            a.push_back(temp);
        }

        string ans=angryProfessor(k, a);

        cout << ans;
    }
    
    return 0;
}
