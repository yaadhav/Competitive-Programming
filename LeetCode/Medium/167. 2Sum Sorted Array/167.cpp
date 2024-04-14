#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int l=0, h=numbers.size()-1;

        while( l<h )
        {
            int m=(l+h+1)/2;

            if( target>numbers[m]+numbers[h] )
                l=m+1;
            else if( target==numbers[m]+numbers[h] )
            {
                l=m;
                break;
            }
            else if( target<numbers[l]+numbers[m])
                h=m-1;
            else if( target==numbers[l]+numbers[m] )
            {
                h=m;
                break;
            }
            else
            {
                if( numbers[l]+numbers[h]>target )
                    h--;
                else if( numbers[l]+numbers[h]<target )
                    l++;
                else 
                    break;
            }
        }

        return {l,h};
    }
};

int main()
{
    vector<int> nums={2,7,11,15};
    int target = 9;

    Solution s;
    vector<int> ans = s.twoSum(nums, target);

    cout << ans[0] << " " << ans[1] << endl;
    

    return 0;
}