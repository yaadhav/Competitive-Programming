#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int recurse( int ind, int k, int w, vector<int> profits, vector<int> capital) {

        if( ind==profits.size() || k==0 )
            return 0;

        int notTake=recurse( ind+1, k, w, profits, capital);

        int take=0;
        if( w>=capital[ind] )
            take=recurse( ind+1, k-1, w+profits[ind], profits, capital)+profits[ind];

        return max( take, notTake);
    }

    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        
        int n=profits.size();
        vector<pair<int,int>> ds;

        for( int i=0; i<n; i++) 
            ds.push_back({capital[i], profits[i]});

        sort( ds.begin(), ds.end());

        priority_queue<pair<int,int>> pq;
        int ind=0;
        while( k-- ) {
            while( ind<n ) {
                if( ds[ind].first<=w )
                    pq.push({ds[ind].second, ds[ind].first});
                else
                    break;
                ind++;
            }

            if( pq.empty() )
                break;

            w+=pq.top().first;
            pq.pop();
        }

        return w;
    }
};

int main()
{
    vector<int> profits={1,2,3}, capital={1,1,2};
    int k=1, w=0;

    Solution sol;
    int ans=sol.findMaximizedCapital( k, w, profits, capital);

    cout << ans << endl;

    return 0;
}