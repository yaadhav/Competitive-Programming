#include <iostream>
using namespace std;

int main() {
	int x, n[1000], m[1000];
	int i, rn, rm, tot;
	
	cin >> x ;
	
	for( i=0; i<x; i++)
	{
		cin >> n[i] >> m[i] ;
	}
	
	for( i=0; i<x; i++)
	{
		rn=n[i]%2;
		rm=m[i]%2;
		
		if ( rn==1 && rm==1 )
			tot = (rm*n[i])+(rn*m[i])-1;
		else 
			tot = (rm*n[i])+(rn*m[i]) ;
			
		cout << tot << endl ;
	}

	return 0;
}

