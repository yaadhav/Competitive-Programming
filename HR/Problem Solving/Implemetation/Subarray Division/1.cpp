// Q : https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int birthday(vector<int> s, int d, int m) {
    int sum, count=0;
    
    for( int i=0; i<s.size(); i++ ) {
        sum=0;
        for( int j=i; j<i+m; j++ ) 
            sum+=s[j];
        
        if( sum==d )
            count++;
    }

    return count;
}


int main()
{
    int n;
    cin >> n;

    vector<int> s;
    int temp;

    for( int i=0; i<n; i++)
    {
        cin >> temp;
        s.push_back(temp);
    }

    int d, m;
    cin >> d >> m;

    int res=birthday( s, d, m);
    cout << res ;
    
    return 0;
}
