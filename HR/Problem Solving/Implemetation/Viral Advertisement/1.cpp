// Q : https://www.hackerrank.com/challenges/strange-advertising/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int viralAdvertising(int n) {

    int people=5, res=0;
    while(n--)
    {
        res+=people/2;
        people=(people/2)*3;
    }

    return res;
}

int main()
{
    int n;
    cin >> n;

    int result = viralAdvertising(n); 
    cout << result << endl;

    return 0;
}
