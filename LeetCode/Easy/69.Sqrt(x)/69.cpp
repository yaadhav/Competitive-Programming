#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        return sqrt(x);        
    }
};

int main()
{
    int x;
    cin >> x;

    Solution sol;
    int result=sol.mySqrt(x);

    cout << result;
}