#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

class Solution {
public:
    vector<string> ans;

    void combinations( int ind, ll val, ll prev, string ds, string num, int target) {

        if( ind==num.size()) {
            ans.push_back(ds+"="+to_string(val));
            return;
        }

        for( int i=ind; i<num.size(); i++) {

            string comb=num.substr( ind, i-ind+1);
            ll cval=stoll(comb);

            if( i>ind && num[i]=='0') break;

            if( ind==0 )
                combinations( i+1, cval, cval, comb, num, target);
            else {
            combinations( i+1, val+cval, cval, ds+"+"+comb, num, target);
            combinations( i+1, val-cval, -cval, ds+"-"+comb, num, target);
            combinations( i+1, val-prev+prev*cval, prev*cval, ds+"*"+comb, num, target);
            }
        }
    }

    vector<string> addOperators(string num, int target) {

        combinations( 0, 0, 0, "", num, target);
        return ans;
    }
};

int main()
{
    string num="232";
    int target=6;

    Solution s;
    vector<string> ans = s.addOperators(num, target);

    for( auto i: ans)
        cout << i << endl;
    cout << endl;  

    return 0;
}