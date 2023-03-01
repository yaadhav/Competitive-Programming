#include <iostream>
using namespace std;

int main() {
	long long int t, n[1000], a[1000], b[1000];
	long long int i, j, Max = 1000000000 ;
	
	cin >> t ;
	
	for( i=0; i<t; i++)
	{
		cin >> a[i] >> b[i] >> n[i] ;
	}
	
	for( i=0; i<t; i++)
	{
		j=n[i];
		
		if(a[i]>n[i])
			j=a[i];
		
		while( j<=10000 )
		{
			if( j%a[i]==0 && j%b[i]!=0 )
			{	cout << j << endl ;
				break;	}
				
			if( a[i]%b[i]==0 )
			{	cout << -1 << endl ;
				break;	}
					
			j++;	
		}
		
		if( j==Max+1 )
		cout << -1 << endl ;
	}

	return 0;
}

