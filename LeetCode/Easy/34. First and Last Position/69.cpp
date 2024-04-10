#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {

        long long int l=1, h=x;

        while( l<=h )
        {
            long long int mid=(l+h+1)/2;

            if( mid*mid==x )
                return mid;
            else if( mid*mid>x )
                h=mid-1;
            else
                l=mid+1;
        }

        return h;        
    }
};

int main()
{
    int x;
    cin >> x;

    Solution sol;
    int result=sol.mySqrt(x);

    cout << result;
}