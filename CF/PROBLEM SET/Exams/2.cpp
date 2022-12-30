#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n, k,sum;

    cin >> n >> k ;

   sum=n-(k-(2*n)) ;
    if(sum<0)
    {
        cout<<"0";
    }
    else{
        cout<<sum;
    }
    return 0;
}