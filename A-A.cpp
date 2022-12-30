#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len = s.size();
    reverse(s.begin(),s.end());
    int i,c=0, result, p= 5;
    for (i=0; i<len; i++)
    {
        c++;
        if (s[i] == 'a')
        {
            break;
        }
    }
    //cout<<c<<endl;
    if (c==len)
    {
        cout<<-1<<endl;
    }
    else
    {
        result =len-c;
        cout<<result+1<<endl;
    }
    return 0;
}
