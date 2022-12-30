#include <iostream>
using namespace std;

int main() {
    long long int t, n[1000], m[1000];
	long long int i, j, k, l, a, b, A[1000], B[1000], D[1000], max, index, flag, x;
	
	cin >> t ;
	
	for( i=0; i<t; i++ )
	    cin >> n[i] >> m[i] ;
	    
	
	
	for( i=0; i<t; i++ )
	{
		x=0;
		k=m[i];
		
		for( j=m[i]; j>1; j--)
		{
			a=j; b=k;
			for( l=a; l>=1; l--)
			{
				if( a%l==0 && b%l==0 )
				{
					if( l>=n[i] )
					{
						A[x]=a;
						B[x]=b;					
						x++;
						flag=1;
						break;
					}					
				}
			}
			
			if(flag==1)
				break;
		}
		k--;
		
		max=D[0];
		index=0;
		
		for( i=0; i<x; i++)
		{
			D[x]=a-b;
				
			if(D[x]<0)
			D[x]*= -1 ;
					
			if( D[x]>max )
			{	max=D[x];
				index=x;	}
		}
	
		cout << A[index] << " " << B[index] << endl ;
	}
		
	return 0;
}

