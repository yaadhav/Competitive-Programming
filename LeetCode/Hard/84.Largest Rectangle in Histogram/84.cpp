#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int largestRectangleArea_Intution(vector<int>& heights) {

        int n=heights.size();
        vector<int> width(n);
        stack<int> st;

        for( int i=n-1; i>=0; i--) {

            while( !st.empty() && heights[st.top()]>=heights[i] )
                st.pop();

            if( !st.empty() )
                width[i]=st.top();
            else    
                width[i]=n;

            st.push(i);
        }

        while( !st.empty() )
            st.pop();

        int maxx=0;
        for( int i=0; i<n; i++) {

            while( !st.empty() && heights[st.top()]>=heights[i] )
                st.pop();

            if( !st.empty() )
                width[i]=width[i]-st.top()-1;

            maxx=max( width[i]*heights[i], maxx);

            st.push(i);
        }

        return maxx;
    }

    int largestRectangleArea(vector<int>& heights) {

        int n=heights.size();
        stack<int> st;

        int maxx=0;
        for( int i=0; i<=n; i++) {
            while( !st.empty() && ( i==n || heights[st.top()]>=heights[i]) ) {
                int height=heights[st.top()];
                st.pop();

                int width;
                if( !st.empty() )
                    width=i-st.top()-1;
                else    
                    width=i;

                maxx=max( height*width, maxx);
            }

            st.push(i);
        }

        return maxx;
    }
};

int main()
{
    vector<int> heights={2,1,5,6,2,3};

    Solution sol;
    int ans = sol.largestRectangleArea(heights);

    cout << ans << endl;

    return 0;
}
