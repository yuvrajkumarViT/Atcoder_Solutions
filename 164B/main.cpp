#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d;

    cin>>a>>b>>c>>d;
    while(a>0 || c>0)
    {
        c=c-b;
        a=a-d;
        if(c<=0)
        {

            cout<<"Yes";
            break;
        }
        if(a<=0)
        {
            cout<<"No";
            break;
        }

    }

}
