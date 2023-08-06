#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int climbStairs(int n) {
        
        unsigned long long int first=0, next=1, curr;
        for( int i=2; i<=n+1; i++)
        {
            curr=first+next;
            first=next;
            next=curr;
        }

        if( n==0 || n==1 )
            return n;
        else
            return curr;
    }
};

int main()
{
    int n;
    cin >> n;

    Solution sol;
    for( int i=0; i<=n; i++)
    {
        int result=sol.climbStairs(i);
        cout << i << "->" << result << endl;
    }

    return 0;
}