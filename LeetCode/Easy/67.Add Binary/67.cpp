#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {

        string temp;
        {
            temp=a;
            a=b;
            b=temp;
        }

        temp="";
        for( int i=a.length(); i<b.length(); i++)
            temp+="0";
        a=temp+a;

        int extra=0; temp="";
        for( int i=a.length()-1; i>=0; i--)
        {
            int sum=((int)a[i]-48)+((int)b[i]-48)+extra;
            extra=0;

            if( sum==3 )
            {
                extra++;
                temp+="1";
            }
            else if( sum==2 )
            {
                extra++;
                temp+="0";
            }
            else 
                temp+=to_string(sum);           
        }

        if( extra==1 )
            temp+="1";

        string res="";
        for( int i=temp.length()-1; i>=0; i--)
            res+=temp[i];

        return res;                
    }
};

int main()
{
    string a, b;
    cin >> a >> b;

    Solution sol;
    string result=sol.addBinary(a,b);

    cout << result;
}