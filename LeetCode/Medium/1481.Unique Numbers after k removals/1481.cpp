#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {

        sort( arr.begin(), arr.end());

        vector<int> freq;
        int c=1;

        for( int i=1; i<arr.size(); i++) {
            if( arr[i-1]==arr[i] )
                c++;
            else {
                freq.push_back(c);
                c=1;
            }
        }
        freq.push_back(c);

        sort( freq.begin(), freq.end());

        int ans=0;
        for( int i: freq) {
            if( i<=k )
                k-=i;
            else 
                break;
            ans++;
        }

        return freq.size()-ans;
    }
};

int main()
{
    vector<int> arr={2,1,1,3,3,3};
    int k=3;

    Solution s;
    int ans = s.findLeastNumOfUniqueInts(arr, k);

    cout << ans << endl;    

    return 0;
}