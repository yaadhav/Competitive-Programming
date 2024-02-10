#include <bits/stdc++.h>
using namespace std;

int designerPdfViewer( vector<int> h, string word) {

    int val, max=0;
    for( int i=0; i<word.length(); i++)
    {
        val = (int)word[i]-97 ;
        if( h[val]>max )
            max=h[val];
    }
    max*=word.length();
    return max;
}

int main()
{
    string word;
    vector<int> h;
    int temp;

    for( int i=0; i<26; i++)
    {
        cin>>temp;
        h.push_back(temp);
    }

    cin >> word;

    int res=designerPdfViewer( h, word);
    cout << res;
    
}
