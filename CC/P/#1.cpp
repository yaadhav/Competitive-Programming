#include <iostream>
using namespace std;

int main() {
    
    int t, cases, a, b, c, count; 
    
    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        cin >> a >> b >> c ;
        count=0;
        
        if( a%2==0 )
            count++;
        if( b%2==0 )
            count++;
        if( c%2==0)
            count++;
            
        if( count==0 || count==3 )
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;
    }
    
	return 0;
}
