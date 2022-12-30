#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int c=0, result2;
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        int x, y,k;
        cin>>x>>y>>k;
        int result = abs(x-y);
        if (result>=k || result == 0 )
        {
            result2 = result/k;
        }
        else
        {
            cout<<1<<endl;
            continue;
        }

        if (result%k != 0)
        {
           result2 = result2 +1;
        }
        cout<<result2<<endl;

    }

    return 0;
}
