#include <bits/stdc++.h>
using namespace std;

int countingValleys(int steps, string path) {
    int pos=0, count=0;
    
    for( int i=0; i<path.length()-1; i++)
    {   
        if( pos==0 && path[i]=='D' )
            count++;
            
        if( path[i]=='U' )
            pos++;
        else
            pos--;
    }
    
    return count ;
}

int main()
{
    int steps;
    string path;
    cin >> steps >> path;

    int res=countingValleys(steps , path);
    cout << res ;

    return 0;
}
    
