#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort( seats.begin(), seats.end());
        sort( students.begin(), students.end());

        int ans=0;
        for( int i=0; i<seats.size(); i++)
            ans+=abs(seats[i]-students[i]);

        return ans;
    }
};

int main()
{
    vector<int> seats={ 1, 3, 4, 5, 9};
    vector<int> students={ 2, 4, 6, 7, 11};

    Solution sol;
    int ans=sol.minMovesToSeat(seats, students);

    cout << ans << endl;

    return 0;
}