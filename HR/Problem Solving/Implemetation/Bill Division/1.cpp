#include <bits/stdc++.h>
using namespace std;

void bonAppetit(vector<int> bill, int k, int b) {
    
    int sum = accumulate( bill.begin(), bill.end(), 0);
    sum = sum-bill[k];
    
    if( (sum/2)==b )
        cout << "Bon Appetit" ;
    else
        cout << b-(sum/2) ;
}


int main()
{
    int n, k, b, temp;
    cin >> n >> k;

    vector<int> bill;
    for( int i=0; i<n; i++)
    {
        cin >> temp ;
        bill.push_back(temp);
    }
    cin >> b;

    bonAppetit( bill, k, b );

    return 0;
}
