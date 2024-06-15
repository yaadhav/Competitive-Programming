#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        map<int,int> hash;

        for( auto i: arr1) 
            hash[i]++;

        vector<int> ans;
        for( auto i: arr2) {
            while( hash[i]-- )
                ans.push_back(i);
            hash.erase(i);
        }

        for( auto i: hash) {
            while( i.second-- )
                ans.push_back(i.first);
        }

        return ans;
    }
};

int main()
{
    vector<int> arr1={2,3,1,3,2,4,6,7,9,2,19}, arr2={2,1,4,3,9,6};

    Solution s;
    vector<int> ans=s.relativeSortArray( arr1, arr2);

    for( auto i: ans)
        cout << i << " ";
    cout << endl;

    return 0;
}