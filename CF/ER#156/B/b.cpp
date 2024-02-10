// Q : https://codeforces.com/contest/1886/problem/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        double p1, p2, a1, a2, b1, b2;
        cin >> p1 >> p2 >> a1 >> a2 >> b1 >> b2;

        double az=sqrt( pow(a1, 2)+pow(a2, 2) );
        double bz=sqrt( pow(b1, 2)+pow(b2, 2) );

        double ap=sqrt( pow(p1-a1, 2)+pow(p2-a2, 2) );
        double bp=sqrt( pow(p1-b1, 2)+pow(p2-b2, 2) );

        double mz=az<bz ? az:bz;
        double mp=ap<bp ? ap:bp;
        double max=mp>mz ? mp:mz;

        cout << setprecision(11);
        if( mz==az && mp==ap || mz==bz && mp==bp )
        {
            cout << max << endl;
            continue;
        }

        double ab=sqrt( pow(b1-a1, 2)+pow(b2-a2, 2) );
        if( max*2>=ab )
            cout << max << endl;
        else
            cout << ab/2 << endl;
    }

    return 0;
}