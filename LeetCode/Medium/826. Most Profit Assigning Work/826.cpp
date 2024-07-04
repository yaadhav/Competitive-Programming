#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binarySearch( int val, vector<pair<int,int>> ds) {

        int low=0, high=ds.size()-1;

        while( low<=high ) {
            int mid=(low+high)>>1;

            if( ds[mid].first<=val ) 
                low=mid+1;
            else
                high=mid-1;
        } 

        if( high==-1 ) return 0;
        else return ds[high].second;

    }

    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {

        vector<pair<int,int>> ds;

        for( int i=0; i<profit.size(); i++) 
            ds.push_back({difficulty[i], profit[i]});

        sort( ds.begin(), ds.end());

        for( int i=1; i<ds.size(); i++)
            ds[i].second=max( ds[i-1].second, ds[i].second);

        int ans=0;
        for( int i: worker) 
            ans+=binarySearch( i, ds);

        return ans;   
    }
};

int main()
{
    vector<int> difficulty={2,4,6,8,10}, profit={2,4,5,3};
    vector<int> worker={2,3,6,8};

    Solution s;
    int ans = s.maxProfitAssignment(difficulty, profit, worker);

    cout << ans << endl;    

    return 0;
}