#include <iostream>
using namespace std;

int main() {
    long long int t, n[1000], arr[1000][100];
	long long int i, j, k, sum;
	
	cin >> t ;
	
	for( i=0; i<t; i++ )
	{
	    cin >> n[i] ;
	    for( j=0; j<n[i] ; j++)
	        cin >> arr[i][j] ;
	}
	
	for( k=0; k<t; k++ )
	{
		sum=0 ;
		for( i=0; i<n[k]; i++)
		{
			for( j=i; j<n[k]; j++)
			sum=sum+(arr[k][i]*arr[k][j]) ;
		}
		cout << sum ;
	}
	
	return 0;
}

