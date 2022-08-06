#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n % 2 == 1)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<" 2 1 "<<endl;
        
        for(int i=3;i<n;i+=2)
        {
            cout<<" "<<i+1<<" "<<i;
        }
        cout<<endl;
    }
    return 0;
}



//solve 6/08/2022 
// codeforces practice  
