#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {

        if( points.size()==1 )
            return 1;

        int ans=2;
        for( int i=0; i<points.size(); i++) {
            map<double, int> lines; 
            int maxx=0, inf=0;

            for( int j=0; j<points.size(); j++) {
                if( i==j ) continue;

                double x=points[i][0]-points[j][0];
                double y=points[i][1]-points[j][1];

                if( x==0 ) {
                    inf++;
                    maxx=max( maxx, inf);
                    continue;
                }

                lines[y/x]++;
                maxx=max( maxx, lines[y/x]);
            }
            
            ans=max( maxx+1, ans);
        }
        
        return ans;
    }
};

int main()
{
    vector<vector<int>> points={ {3,1}, {1,2}, {2,5}, {8,3}};   
    
    Solution sol;
    int ans=sol.maxPoints(points);
    cout << ans << endl; 

    return 0;
}