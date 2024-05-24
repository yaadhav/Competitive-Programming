#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNthDigit(int n) {

        int c=0, d=0;
        while(true)
        {
            if( c+(9*(pow(10,d))*(d+1))<n ) {
                c+=(9*(pow(10,d))*(d+1));
                d++;
            }
            else
                break;
        }
        d+=1-(c==n);

        int ind=(n-c+d-1)%d;

        c=pow(10,d-1)-1+((n-c+d-1)/d);
        string num=to_string(c);

        return num[ind]-'0';        
    }
};

int main()
{
    int i=1;

    Solution s;
    int ans = s.findNthDigit(i);
    cout << ans;

    return 0;
}