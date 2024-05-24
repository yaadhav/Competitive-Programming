#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int fact(int n) {
        if( n<=1 ) return 1;
        else return n*fact(n-1);
    }

    void Permutations( int n, int k, string vis, string &ans) {

        if( n==0 ) return;

        int d=fact(n-1);
        int ind1=k/d, ind2=-1;

        while( ind1>=0 ) {
            ind2++;
            if( vis[ind2]!='X' ) ind1--;
        } 

        ans+=vis[ind2];
        vis[ind2]='X';

        Permutations( n-1, k%d, vis, ans);

    }

    string getPermutation(int n, int k) {

        string vis, ans="";

        for( int i=0; i<n; i++)
            vis+='1'+i;
        
        Permutations( n, k-1, vis, ans);

        return ans;
    }
};

int main()
{
    int n=4, k=21;

    Solution s;

    string ans = s.getPermutation(n, k);
    cout << ans << endl;
    return 0;
}
