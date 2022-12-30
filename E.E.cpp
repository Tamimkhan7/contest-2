#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main ()
{
    string s;
    int c=0,i,k;
    cin>>s;
    int len = s.size();
    for (i=0; i<len; i++)
    {
        if (s[i]>= 'A' && s[i] <='Z' && s[len-1] >= 'A' && s[i] <= 'Z')
        {
            if (s[i] >=  '0' && s[i] <='9')
            {
                c++;

                if (c>=6);
                {
                    k = std::stoi(s);
                    if (k>=100000 && k<=999999)
                    {
                        cout<<"Yes"<<endl;
                    }
                    else
                    {
                        cout<<"No"<<endl;
                    }
                }
            }
    cout<<c<<endl;
        }
    }

    return 0;
}
