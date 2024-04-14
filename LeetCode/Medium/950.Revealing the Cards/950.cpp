#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {

        vector<int> ans(deck.size());
        sort( deck.begin(), deck.end());

        int check=0;
        for( int c=0; c<deck.size(); )
        {
            for( int i=0; i<ans.size() && c<deck.size(); i++)
            {
                if( ans[i]==0 )
                {
                    if( check==0 )
                    {
                        ans[i]=deck[c];
                        c++;
                        check++;
                    }
                    else
                    {
                        if( c==deck.size()-1 )
                        {
                            ans[i]=deck[c];
                            c++;
                        }
                        else
                            check=0;
                    }
                }
            }
            cout << endl;
        }

        return ans;        
    }
};

int main()
{
    vector<int> deck={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11, 12, 13, 14, 15, 16, 17 ,18};

    Solution s;
    vector<int> ans = s.deckRevealedIncreasing(deck);

    for( int i: ans)
        cout << i << " ";
    cout << endl;
}