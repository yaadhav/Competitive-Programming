#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    string keys="qwertyuiopasdfghjkl;zxcvbnm,./"; 

    char dir;
    string s;
	cin >> dir >> s ;

    int add = dir=='R' ? -1:1 ;

    for( int i=0; i<s.length(); i++)
    {
        int ind=keys.find(s[i]);
        ind+=add;

        if(ind==-1)
            ind=s.length()-1;
        else if(ind==keys.length())
            ind=0;   
            
        cout << keys[ind] ;
    }

    return 0;
}
