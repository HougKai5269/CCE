#include <stdio.h>
#include <iostream>
using namespace std;
int a[10000000];
int main()
{
    cout<<"請問你想要幾個質數? (最大的質數不超過10000000,請給小一點) ";
    int Q;
    cin>>Q;

    int ans=0;
    for(int i=2; ans<Q ; i++)
    {
        if( a[i]==0 )
        {
            ans++;
            cout<<" "<<i;
            for(int k=i+i; k<10000000; k+=i )
            {
                a[k]=1;
            }
        }
    }
}
