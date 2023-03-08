#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int arr[n];
    int c=0;
    int r;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(int i=0;  i<n; i++){
        r =arr[k];        
        }
        for(int i=1; i<=n; i++){
                 if(r>0){
        if(arr[i]>=r){
            c++;
        }
        }
        }
    
    cout<<c<<endl;
    
}