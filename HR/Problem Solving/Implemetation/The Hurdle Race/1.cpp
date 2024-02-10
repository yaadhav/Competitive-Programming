#include <bits/stdc++.h>
using namespace std;

int hurdleRace(int k, vector<int> height) {
   
    int max=height[0]; 
    for( auto i: height)
    {
        if( i>max )
            max=i;
    }
    
    max = max-k>0 ? max-k:0 ;
    
    return max;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> height;
    int temp;

    while( n-- )
    {
        cin >> temp;
        height.push_back(temp);
    }

    int res=hurdleRace(k, height);
    cout << res ;

    return 0;
}
    
