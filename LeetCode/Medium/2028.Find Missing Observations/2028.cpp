#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {

        int sum=mean*(rolls.size()+n);

        for( int i: rolls)
            sum-=i;

        if( sum>6*n )
            return {};

        int add=sum/n;
        vector<int> ans;
        for( int i=0; i<sum%n; i++)
            ans.push_back(add+1);
        for( int i=sum%n; i<n; i++)
            ans.push_back(add);

        return ans;      
    }
};

int main()
{
    vector<int> rolls={1,5,6};
    int mean=3, n=4;

    Solution s;
    vector<int> ans = s.missingRolls(rolls, mean, n);

    for( auto i: ans)
        cout << i << " ";
    cout << endl;

    return 0;
}