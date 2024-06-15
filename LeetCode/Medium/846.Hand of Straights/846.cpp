#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {

        if( hand.size()%groupSize!=0 )
            return false;

        map<int,int> hash;

        for( int i: hand) 
            hash[i]++;

        auto it=hash.begin();
        for( int i=0; i<hand.size()/groupSize; i++) {
            int st=(*it).first, end=st+groupSize;
            for( int j=st; j<end; j++) {
                if( hash[j]==0 )
                    return false;
                hash[j]--;
            }
        
            while( it!=hash.end() ) {
                if( (*it).second ) {
                    st=(*it).first;
                    break; 
                }
                it++;
            }
        }
        
        return true;
    }
};

int main()
{
    vector<int> hand={1,2,2,3,3,4,6,7,8};
    int groupSize=3;

    Solution s;
    int ans = s.isNStraightHand(hand, groupSize);

    cout << ans << endl;    

    return 0;
}