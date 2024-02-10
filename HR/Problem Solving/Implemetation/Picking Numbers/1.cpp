#include <bits/stdc++.h>
using namespace std;

int pickingNumbers(vector<int> a) {
    int max=0, count=1;

    sort( a.begin(), a.end());
    int check=a[0];
    
    for( int i=1; i<a.size(); i++)
    {
        if( a[i]-check<=1 )
            count++;
        else
        {
             check=a[i];
             max = count>max ? count:max ;
             count=1;
        }
    }
    max = count>max ? count:max ;
    return max;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a;
    int temp;

    while( n-- )
    {
        cin >> temp;
        a.push_back(temp);
    }

    int res=pickingNumbers(a);
    cout << res ;

    return 0;
}
    
