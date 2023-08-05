#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    unsigned long long int fact( int a, int b )
    {
        unsigned long long int res=1;
        for( int i=a; i>b; i--)
            res*=i;
        return res;
    }

    int climbStairs(int n) {
        unsigned long long int ans=0, a, b;
        for( int i=n, j=0; i>=(n+1)/2; i--,j++)
        {
            a=i-j;
            b=j;

            if(b>a)
            {
                a=a+b;
                b=a-b;
                a=a-b;
            }

            ans+=fact(i,a)/fact(b,1);        
        }
        return ans;
    }
};

int main()
{
    int n;
    cin >> n;

    Solution sol;
    int result=sol.climbStairs(n);
    cout << result << endl;

    return 0;
}