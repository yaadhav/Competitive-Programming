#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {

        map<int,int> hash;
        set<int> s;

        int zero=0;
        for( int i: nums) {
            hash[i]++;
            zero+=hash[i]==2;
            s.insert(i);
        }

        if( k==0 ) 
            return zero;

        int ans=0;
        for( auto i: s) {
            if( hash[i+k] )
                ans++;
            if( hash[i-k] )
                ans++;
        }

        return ans/2;
    }
};

int main()
{
    vector<int> nums={ 1, 1, 3, 4, 3, 5, 3,6};

    Solution sol;
    int ans=sol.findPairs(nums, 2);

    cout << ans << endl;
    
    return 0;
}