#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    string Name1, Name2;
    string f="FLAMES" ;

    cin >> Name1 >> Name2 ;

    int count = Name1.length()+Name2.length();

    for( int i=0; i<Name1.length(); i++)
    {
        for( int j=0; j<Name2.length(); j++)
        {
            if( Name1[i]==Name2[j] )
            {
                Name1.erase(i,1);
                Name2.erase(j,1);
                i--; j--;
                count-=2;
                break;
            }
        }
    }

    for( int i=0; i<5; i++)
    {
        int e=count%(f.length());
        e = e==0 ? f.length() : e ;
        
        f.erase(e-1,1);
    }

    cout << f ;

    cin.tie(NULL);
    return 0;
}


