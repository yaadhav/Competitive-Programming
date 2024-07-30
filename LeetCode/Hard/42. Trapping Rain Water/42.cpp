#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> get_nge( vector<int> arr) {

        int n=arr.size();
        vector<int> nge(n);
        stack<int> st;

        for( int i=n-1; i>=0; i--) {
            while( !st.empty() && arr[i]>arr[st.top()]) 
                st.pop();

            if( !st.empty() )
                nge[i]=st.top();
            else
                nge[i]=-1;

            st.push(i);
        }

        return nge;

    }

    vector<int> get_nse(vector<int> arr) {

        int n=arr.size();
        vector<int> nse(n);
        stack<int> st;

        for( int i=n-1; i>=0; i--) {
            while( !st.empty() && arr[i]<arr[st.top()]) 
                st.pop();

            if( !st.empty() )
                nse[i]=st.top();
            else
                nse[i]=-1;

            st.push(i);
        }

        return nse;

    }

    int trap(vector<int>& height) {
        vector<int> nge=get_nge(height);

        for( int i=0; i<height.size(); i++) {
            
            cout << height[i] << " " << nge[i] << endl;
        }

        return 0;   
    }
};

int main()
{
    //                  0  1  2  3  4  5  6  7  8  9  0  1
    vector<int> height={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    //                              7   5 7 -1  -1 0 -1 -1


    Solution sol;
    int ans=sol.trap(height);

    cout << ans << endl;

    return 0;
}