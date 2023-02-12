#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    for( int cases=0; cases<t; cases++)
    {
        int n, k;
		long long int s;
        cin >> n >> k >> s;
		vector<int> ans;

		for( int i=0; i<n; i++)
		{
			if( s%k!=1 && s%k!=0 && (s+1)%k!=0 )
				break;
			
			if( s%k==0 || s%k==1 )
				ans.push_back(s%k);
				
			else if((++s)%k==0)
				ans.push_back(-1);

			s=s/k;
		}

		if(s!=0)
		{
			cout << -2 << endl ;
			continue;
		}

		for( int i=0; i<n; i++)
			cout << ans[i] << " ";
		cout << endl ;
    }

    return 0;
}