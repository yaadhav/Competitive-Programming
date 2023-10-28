#include<bits\stdc++.h>
using namespace std;

class Solution {
public:

    int uniquePaths(int m, int n) {
        
        long long int ans=1;

        if( m<n )
            swap(m, n);

        for( int i=m+n-2, j=1; j<n; i--, j++)
        {
            ans*=i;
            ans/=j;
        }

        return ans;        
    }
};

int main()
{
    int m=3, n=2;

    Solution s;
    cout << s.uniquePaths(m,n) << endl;
}