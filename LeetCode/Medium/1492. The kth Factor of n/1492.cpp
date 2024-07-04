#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthFactor(int n, int k) {

        for( int i=1; i<=n; i++) {
            if( n%i==0 ) k--;
            if( k==0 ) return i;
        }
        
        return -1;
    }
};

int main()
{
    int n=4, k=3;
    
    Solution sol;
    int ans = sol.kthFactor(n, k);

    cout << ans << endl;

    return 0;
}