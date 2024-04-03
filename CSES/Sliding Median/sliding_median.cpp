#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	
    ll n=8, k=3;
    //cin >> n >> k;

    vector<ll> x={ 2, 4, 3, 5, 8, 1, 2, 1};
    multiset<ll> m;
    multiset<ll> :: iterator itr;

    //for( ll &i: x)
      //  cin >> i;

    for( ll i=0; i<k; i++)
        m.insert(x[i]);

    for( ll i=0; i<=n-k; i++)
    {
    
    }

    itr=m.begin();
    itr++;
   
    cout <<  *itr << endl;

    return 0;

}

