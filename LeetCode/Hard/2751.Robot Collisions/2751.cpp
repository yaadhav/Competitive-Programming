#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        
        int n=positions.size();
        vector<pair<int,int>> ds;

        for( int i=0; i<n; i++) {
            if( directions[i]=='L' ) healths[i]=(-healths[i]);
            ds.push_back( { positions[i], healths[i]} );
        }

        sort( ds.begin(), ds.end());

        stack<pair<int,int>> st;
        map<int,int> hash;

        for( int i=0; i<n; i++) {
            if( ds[i].second>0 )
                st.push(ds[i]);
            else {
                ds[i].second=-ds[i].second;
                while( !st.empty() && st.top().second<ds[i].second ) {
                    ds[i].second--;
                    st.pop();
                }

                if( !st.empty() && st.top().second==ds[i].second ) st.pop();
                else if( !st.empty() ) st.top().second--;
                else hash[ds[i].first]=ds[i].second;
            }
        }
        
        while( !st.empty() ) {
            hash[st.top().first]=st.top().second;
            st.pop();
        }

        vector<int> ans;
        for( int i=0; i<n; i++) {
            if( hash[positions[i]]>0 )
                ans.push_back(hash[positions[i]]);
        }

        return ans;
    }
};

int main()
{
    vector<int> positions={ 4, 5, 3, 2, 7};
    vector<int> healths={ 10, 12, 11, 13, 15};
    string directions="LRRLR";

    Solution sol;
    vector<int> ans=sol.survivedRobotsHealths(positions, healths, directions);

    for( auto i: ans) 
        cout << i << " ";
    cout << endl;

    return 0;
}