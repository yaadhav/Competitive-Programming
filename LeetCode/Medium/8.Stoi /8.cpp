#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void stringToInt( int ind, string s, string& ans){

        if( ind==s.length() )
            return;

    
        if( (s[ind]=='+' || s[ind]=='-') && ans.length()==0 )
            ans+=s[ind];
        else if( s[ind]>='0' && s[ind]<='9' ) 
            ans+=s[ind];
        else if( ans.length()!=0 || s[ind]!=' ' )
            return;

        stringToInt( ind+1, s, ans);
    }


    int myAtoi(string s) {

        string ans="";
        stringToInt( 0, s, ans);

        if(ans=="" || ans=="+" || ans=="-" ) return 0;

        string ch1= ans[0]=='-' ? "-":"";
        string ch2= ans[0]=='-' ? to_string(INT_MIN):to_string(INT_MAX);

        for( int i=0; i<ans.length(); i++) {
            if( ans[i]>='1' && ans[i]<='9' ) {
                ch1+=ans.substr( i, ans.length()-i );
                break;
            }
        }
        
        if( ch1.length()-(ch1[0]=='-')==10 ) {

            for( int i=0; i<ch1.length(); i++) {
                if( ch1[i]>ch2[i] ) {
                    ans=ch2;
                    break;
                }
                else if( ch1[i]<ch2[i] )
                    break;
            }
        }
        else if( ch1.length()>10 )
            ans=ch2;

        return stoi(ans); 
    }
};

int main()
{
    string str="-1095502006p8";

    Solution s;
    int ans=s.myAtoi(str);

    cout << ans;

    return 0;
}