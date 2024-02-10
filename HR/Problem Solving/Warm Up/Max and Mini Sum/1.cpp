// Q : https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<int> a) {

    sort( a.begin(), a.end());

    long long int total=0 ;

    for( auto i : a )
        total+=i;

    cout << total-a[4] << " " << total-a[0];
}


int main()
{
    vector<int> a;
    int temp;

    for( int i=0; i<5; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }

    miniMaxSum(a);  

    return 0;
}
