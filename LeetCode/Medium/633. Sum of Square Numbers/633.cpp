#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {

        int a=0, b=sqrt(c);

        while( a<b ) {
            if( (a*a)==c-(b*b) )
                return 1;
            else if( (a*a)<c-(b*b) )
                a++;
            else
                b--;
        } 

        return 0;
    }
};

int main()
{
    int c=14;

    Solution s;
    bool ans = s.judgeSquareSum(c);
    cout << ans;

    return 0;
}