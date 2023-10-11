// Q : https://www.codechef.com/problems/DIVISIBLEBY8

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string n, s;
        cin >> n >> s;

        string check="";
        if(s.length()>3)
        {
            check+=s[s.length()-3];
            check+=s[s.length()-2];
            check+=s[s.length()-1];
        }
        else
            check=s;

        int num=stoi(check);

        if( num%8!=0)
        {
            check[check.length()-1]='9';
            num=stoi(check);

            num=(num/8)*8;
            check=to_string(num);

            s[s.length()-1]=check[check.length()-1];
        }             

        cout << s << endl;      
    }

    return 0;
}