#include <bits/stdc++.h>
using namespace std;

string catAndMouse(int x, int y, int z) {
    
    string res;
    if( abs(x-z)<abs(y-z) )
        res="Cat A" ;
    else if ( abs(x-z)>abs(y-z) )
        res="Cat B" ;
    else
        res="Mouse C";
    
    return res;
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    string res=catAndMouse(x, y, z);
    cout << res ;
}
