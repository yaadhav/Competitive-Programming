#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string S, code, digits;

    cin >> code;

    for( int i=0; i<10; i++)
    {    
        cin >> S ;
        digits += S + " " ;
        
    }
    
    int i=0;
    while ( i<80 )
    {
        string check="";
        for( int j=0; j<10; j++)
        {   
            check += code[i] ;
            i++;
        }
       
        cout << (digits.find(check)/10) ; 
    }

    return 0;
}