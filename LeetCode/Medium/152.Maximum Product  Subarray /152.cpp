#include<bits/stdc++.h>
using namespace std;

typedef long long  int ll;

class Solution {
public:

    int maxRange( vector<int> nums, int low, int high) {

        ll prod1=1, prod2=1, prod=1, cnt=0;

        for( int i=low; i<=high;  i++)
        {
            prod*=nums[i];
            if( cnt==0 ) prod1*=nums[i];

            cnt+=(nums[i]<0);

            if(cnt%2==1) prod2*=nums[i];
            else  prod2=1;
        }

        if(cnt%2 && low!=high)
            prod/=max(prod1,prod2);

        return prod;
    }

    int maxProduct(vector<int>& nums) {
\
        int ans=*max_element(nums.begin(), nums.end());
        int low=0;

        vector<pair<int,int>> ranges;

        for( int i=0; i<nums.size(); i++)   {
            if( nums[i]==0 ) {
                if( low<=i-1 )
                    ranges.push_back({low, i-1});
                low=i+1;
            }
        }

        if( low<=nums.size()-1 )
            ranges.push_back({low, nums.size()-1});

        for(  auto i: ranges) {
            ans=max( ans, maxRange( nums, i.first,i.second));
            cout << maxRange( nums, i.first,i.second) << endl;
        }

        return ans;
    }
};

int main()
{
    vector<int> nums={-1};

    Solution s;
    cout << s.maxProduct(nums) << endl;

    return 0;
}