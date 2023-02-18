#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,w,p,i;
    cin>>x>>y>>z;
    int res = y/3;
    i = z/3;
    p = z%3;
    if(z<3)
    {
        w = x*z;
        cout<<w<<endl;
    }
    else if(x>res)
    {
        w = (i*y)+(p*x);
        cout<<w<<endl;
    }
    else if(x<res)
    {
        w = x*z;
        cout<<w<<endl;
    }

}
