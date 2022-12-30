#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long int t, cases, len, i, flag=-1, flag2=-1;
    string FeedBack, str1="010", str2="101" ;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        cin >> FeedBack ;
        len = FeedBack.length() ;

        flag=FeedBack.find(str1);
        flag2=FeedBack.find(str2);

        if ( flag>=0 || flag2>=0 )
            cout << "Good\n" ;
        else
            cout << "Bad\n" ;
    }

    cin.tie(NULL);
    return 0;
}