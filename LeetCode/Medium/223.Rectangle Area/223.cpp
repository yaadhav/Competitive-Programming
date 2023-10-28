#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {   
        
        int ans=(ax2-ax1)*(ay2-ay1)+(bx2-bx1)*(by2-by1);

        vector<pair<int,int>> x={{ax1, 0}, {ax2, 0}, {bx1, 1}, {bx2, 1}};
        vector<pair<int,int>> y={{ay1, 0}, {ay2, 0}, {by1, 1}, {by2, 1}};

        sort( x.begin(), x.end());
        sort( y.begin(), y.end());

        int l=0, b=0;
        if( x[0].second!=x[1].second)    
            l=x[2].first-x[1].first;    
        if( y[0].second!=y[1].second)    
            b=y[2].first-y[1].first;    

        return ans-(l*b);
    }
};

int main()
{
    int ax1 = -2, ay1=-2, ax2=2, ay2=2, bx1=-2, by1=-2, bx2=2, by2=2;

    Solution s;
    cout << s.computeArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2);
}