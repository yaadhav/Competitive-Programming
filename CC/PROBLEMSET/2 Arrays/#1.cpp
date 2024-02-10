#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int t, cases, n, i, j, count;
	vector<int> a ; int v;
	bool flag;
	
	cin >> t;
	
	for ( cases=0; cases<t; cases++ )
	{
	    cin >> n ;
	    n=n*2 ;
		flag = false ;

	    for( i=0; i<n; i++ )
		{
			cin >> v ;
			a.push_back(v) ;
		}

		for( i=0; i<n; i++ )
		{
			count=1;
			for( j=i+1; j<n; j++ )
			{
				if( a[i]==a[j] )
					count++ ;
			}			

			if( count>=3 )
				flag=true ;
		}	   

		if( flag )
			cout << "No\n" ;
		else 
			cout << "Yes\n" ;

		a.clear() ;
	}

	return 0;
}
