#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int Combinations( int n, int r)
    {
        unsigned long long int num=1, den=1;
        r = r<=n/2 ? n-r:r ;
        for( int i=n; i>r; i--)
        {
            if( i%2==1 || i>((n-r)*2) )
                num*=i;
        }

        int count=0;
        for( int i=n-r; i>=1; i--)
        {
            if( i*2>r )
                count++;
            else
                den*=i;
        }

        num*=pow(2,count);

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