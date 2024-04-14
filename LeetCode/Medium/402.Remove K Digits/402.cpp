#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {

        int c=num[0]-'0';
        string curr="0", rem="", last="";

        for( int i=1; i<num.length(); i++)
        {
            if( num[i]-'0'<c )
            {
                last+=to_string(i);

                if( rem.length()+curr.length()>=k )
                    break;

                rem+=curr;
                if( i+1<num.length() ) {
                    c=num[i+1]-'0';
                    curr=to_string(i+1);
                }
                i++;
            }
            else
                curr+=to_string(i);
        }

        string ans="";

        for( int i=curr.length()-1; i>=0 && rem.length()<k; i--)
            rem+=curr[i];
        for( int i=0; i<last.length() && rem.length()<k; i++)
            rem+=last[i];

        sort( rem.begin(), rem.end());

        for( int i=0, j=0; i<num.length(); i++ )
        {
            if( i==rem[j]-'0' )
                j++;
            else
            {
                if( num[i]!='0' || ans.length()!=0 )
                    ans+=num[i];
            }
        }

        return ans;
    }
};

int main()
{
    string num="423572382"; 
    int k=3;

    Solution s;
    string ans = s.removeKdigits(num, k);

    cout << ans << endl;

    return 0;
}

    