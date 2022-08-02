#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v,p,t;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v>>p>>t;
        if((v==1&&p==1)||(p==1&&t==1)||(v==1&&t==1))
        sum++;
    }
    cout<<sum;
    return 0;
}

