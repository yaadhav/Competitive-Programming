// Q : https://leetcode.com/problems/palindrome-number/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        bool ans=true;

        if( x<0 )
            ans=false;

        long long int rev=0, n=x;
        while(n>0)
        {
            rev=rev*10+(n%10);
            n/=10;
        }

        if( rev!=x )
            ans=false;
        
        return ans;
    }
};

int main()
{
    int n; 
    cin >> n;

    Solution s;
    bool ans=s.isPalindrome(n);
    cout << ans;

    return 0;
}
