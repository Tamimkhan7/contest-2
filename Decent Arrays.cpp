#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int p,i,c=0;
    for ( i=1; i<=n; i++)
    {
       cin>>p;
    }
    sort (p.begin(),p.end());
    if (c==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }



    return 0;
}
