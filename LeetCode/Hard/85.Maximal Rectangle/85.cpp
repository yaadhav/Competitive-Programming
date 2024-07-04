#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxRectArea( vector<int> heights ) {
        
        int n=heights.size();
        stack<int> st;

        int maxA=0;
        for( int i=0; i<=n; i++) {
            while( !st.empty() && ( i==n || heights[i]<=heights[st.top()]) ) {
                int height=heights[st.top()];
                st.pop();

                int width;
                if( st.empty() )
                    width=i;
                else    
                    width=i-st.top()-1;

                maxA=max( maxA, height*width);
            }

            st.push(i);
        }

        return maxA;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int n=matrix.size(), m=matrix[0].size();
        vector<int> heights(m);

        int maxx=0;
        for( int i=0; i<n; i++) {
            for( int j=0; j<m; j++) {
                if( matrix[i][j]=='1' ) 
                    heights[j]++;
                else
                    heights[j] = 0;
            }

            maxx = max( maxx, maxRectArea(heights));
        }

        return maxx;
    }
};



int main()
{
    vector<vector<char>> matrix={
        {'1','1','1','1','1','1','1','1'},
        {'1','1','1','1','1','1','1','0'},
        {'1','1','1','1','1','1','1','0'},
        {'1','1','1','1','1','0','0','0'},
        {'0','1','1','1','1','0','0','0'}
    };
                            
    Solution sol;
    int ans=sol.maximalRectangle(matrix);

    cout << ans << endl; 

    return 0;
}