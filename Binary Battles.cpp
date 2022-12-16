#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,a,b, sum=0, result;
    cin>>t;
    long long n,k;
    for (int i=1; i<=t; i++)
    {
        int c=0;
        cin>>n>>a>>b;

        while(n>1)
        {
            n = n/2;
            c++;
        }
        //cout<<c<<endl;
        if (c==0)
        {
            break;
        }
        else
        {
            sum = c*(a+b);
        }
        result = sum-b;
        cout<<result<<endl;
    }

    return 0;
}
