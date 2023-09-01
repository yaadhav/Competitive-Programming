#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int Combinations( int n, int r)
    {
        unsigned long long int num=1, den=1;
        r = r<=n/2 ? n-r:r ;
        for( int i=r; i<=r; i--)
            cout << i << endl;
        for( int i=2; i<=n-r; i++)
            cout << i << endl;
        
        return num/den;        
    }

    vector<int> getRow(int rowIndex){

        if( rowIndex==0 )
            return {1};

        vector<int> row={1};
        for( int i=1; i<rowIndex; i++)
            row.push_back(Combinations( rowIndex, i));
        row.push_back(1);
        
        return row;        
    }
};

int main()
{
    int rowIndex;
    cin >> rowIndex;

    Solution sol;
    vector<int> res = sol.getRow(rowIndex);

    for( auto i : res )
        cout << i << " ";
    cout << endl;

    return 0;
}