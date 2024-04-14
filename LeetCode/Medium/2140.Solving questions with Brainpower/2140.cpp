#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {

        for( int i=0; i<questions.size(); i++ )
            questions[i][1]+=i+1;

        vector<long long> c(questions.size());

        for( auto i: questions)
            c[i[1]]=max(c[i[1]],(long long)i[0]);


        for( int i=1; i<c.size(); i++)
            c[i]=max(c[i],c[i-1]);

        long long ans=c[0];
        for( int i=1; i<questions.size(); i++)        
        {
            c[i]=max( c[i], c[i-1]);
            long long check = c[i]+questions[i][0];
            ans=max( ans, check);
            c[questions[i][1]]=max( c[questions[i][1]], ans);
        }

        return ans;        
    }
};

int main()
{
    vector<vector<int>> questions={ {3,2}, {4,2}, {5,2}, {1,1}, {6,4}, {2,5}, {4,2}, {1,2}, {3,2}, {2,4}, {4,1}, {6,1}};

    Solution s;
    long long ans = s.mostPoints(questions);

    cout << ans << endl;

    return 0;
}