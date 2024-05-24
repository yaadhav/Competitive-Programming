#include<bits/stdc++.h>
using namespace std;

bool sortbySec( const pair<char,int> &a, const pair<char,int> &b ) {
    return a.second>b.second;
}

class Solution {
public:

    string frequencySort(string s) {

        unordered_map<char,int> freq;

        for( auto i: s)
            freq[i]++;

        vector<pair<char,int>> arr;
        for( auto i: freq) 
            arr.push_back({i.first, i.second});
        

        sort( arr.begin(), arr.end(), sortbySec);

        string ans;
        for( auto i: arr) {
            while(i.second--) 
                ans+=i.first;
        }
        
        return ans;
    }
};

int main()
{
    string str="sfbkskfnsfhb";

    Solution s;
    cout << s.frequencySort(str) << endl;

    return 0;
}