#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n=digits.size();
        digits[n-1]++;

        while( digits[--n]==10 )
        {
            digits[n]=0;
            if( n!=0 )
                digits[n-1]++;
            else
            {
                digits.insert(digits.begin(), 1);
                break;
            }
        }

        return digits;        
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> digits;
    int temp;

    for( int i=0; i<n; i++)
    {
        cin >> temp;
        digits.push_back(temp);
    }

    Solution sol;
    vector<int> result=sol.plusOne(digits);

    for( auto i : result)
        cout << i << " ";
    cout << endl;
}