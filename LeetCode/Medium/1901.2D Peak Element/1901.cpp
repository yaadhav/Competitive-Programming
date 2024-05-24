#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        vector<int> ans={-1,-1};

        int low=1, high=mat.size()-1, ind=0;

        vector<int> last(mat[0].size(), -1);
        mat.push_back(last);

        while(low<=high) {
            int mid=(low+high)/2;

            if( mat[mid][ind]<mat[mid+1][ind] )
                low=mid+1;
            else if( mat[mid][ind]>mat[mid-1][ind] ) {
                ind = max_element( mat[mid].begin(), mat[mid].end() )-mat[mid].begin();

                if( mat[mid][ind]>mat[mid][ind-1])
                break;
            }
            else if( high==1 ){
                ind = max_element( mat[0].begin(), mat[0].end() )-mat[0].begin();

                if( mat[mid])
            }
            else
                high=mid-1;
        }

        return ans;
    }
};

int main()
{
    vector<vector<int>> mat={{1,3,5,6,4,2,1},
                             {1,3,8,7,8,6,4},
                             {4,6,5,4,2,1,5}};

    Solution s;
    vector<int> res=s.findPeakGrid(mat);

    cout << res[0] << " " << res[1] << endl;

    return 0;
}