#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {

        if( nums.size()%k!=0 )
            return false;

        map<int,int> hash;

        for( int i: nums) 
            hash[i]++;

        auto it=hash.begin();
        for( int i=0; i<nums.size()/k; i++) {
            int st=(*it).first, end=st+k;
            for( int j=st; j<end; j++) {
                if( hash[j]==0 )
                    return false;
                hash[j]--;
            }
        
            while( it!=hash.end() ) {
                if( (*it).second ) {
                    st=(*it).first;
                    break; 
                }
                it++;
            }
        }
        
        return true;
    }
};

int main()
{
    vector<int> nums={1,2,2,3,3,4,6,7,8};
    int k=3;

    Solution s;
    int ans = s.isPossibleDivide(nums, k);

    cout << ans << endl;    

    return 0;
}