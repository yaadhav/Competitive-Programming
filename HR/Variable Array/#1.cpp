#include <iostream>
using namespace std;

unsigned long long int size = 100000 ;

int main()
{
	long long int n, q, k, a[size], b[size];
	
	cin >> n >> q ;
	
	long long int arr[n][size], i, j, t1, t2;	
	
	for( i=0; i<n; i++)
	{
		cin >> k ;
		for( j=0; j<k; j++)
			cin >> arr[i][j] ;		
	}
	
	for( i=0; i<n; i++)
		cin >> a[i] >> b[i] ;	
	
	for( i=0; i<n; i++)
	{
		a[i]=t1; b[i]=t2;
		cout << arr[t1][t2] ;	}

			
	
	return 0;
}
