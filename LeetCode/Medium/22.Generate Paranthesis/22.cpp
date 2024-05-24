#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void combinations( int ind, int n, string  ds, vector<string>& ans){

        if( ind==2*n-1 ) {
            ds+=')';
            ans.push_back(ds);
            return;
        } 

        int open=0;
        for( auto i: ds) open+=i=='(';

         if( open+1<=n ) {
            ds+="(";
            combinations( ind+1, n, ds, ans);
            ds.pop_back();
        }

        if( ind-open+1<=open ) {
            ds+=')';
            combinations( ind+1, n, ds, ans);
            ds.pop_back();
        }
    }


    vector<string> generateParenthesis(int n) {

        vector<string> ans;
        string ds="(";

        combinations( 1, n, ds, ans);

        return ans;
    }
};

int main()
{
    int n=2;

    Solution s;
    vector<string> ans=s.generateParenthesis(n);

    for( auto i: ans)
        cout << i << endl;
    cout << endl;    

    return 0;
}