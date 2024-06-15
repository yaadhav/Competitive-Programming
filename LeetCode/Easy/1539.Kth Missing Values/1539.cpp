#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int l=0, h=arr.size()-1;

        while(l<=h)
        {
            int m=(l+h)/2;

            if( arr[m]-m-1<k )
                l=m+1;
            else
                h=m-1;    
        }

        return k+h+1;        
    }
};

int main()
{
    vector<int> arr={2,4,5,6,11,13,17,19,21};
    int k=6;

    Solution sol;
    int ans=sol.findKthPositive(arr,k);

    cout << ans << endl;

    return 0;
}