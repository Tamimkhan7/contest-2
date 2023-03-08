#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;
        int res, k;
        k = (a-b);
        if(a<b){
            res = abs(a-b);
            cout<<res<<endl;
        }else if( a%b ==0){
            res = 0;
            cout<<res<<endl;
        }else if(a%b !=0){
            res = a%b;
            res -=b;
            res = abs(res);
            cout<<res<<endl;        
        }else if(a>=k){
            a+=1;
            res = a-b;
            cout<<res<<endl;
        }
    }
}