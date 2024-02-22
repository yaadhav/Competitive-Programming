#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {

        int n=left;

        int sum=0, ans=0, i=0;
        while(n>0)
        {
            if(n%2) {
                int check = pow(2,i)-sum;
                sum+=pow(2, i);

                if( right-left<check )
                    ans+=pow(2,i);
            }

            n/=2;
            i++;
        }

        return ans;
        
    }
};

int main()
{

    Solution s;
    int res = s.rangeBitwiseAnd(1, 2);

    cout << res << endl;
    
    return 0;
}