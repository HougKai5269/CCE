#include <stdio.h>
#include <iostream>
using namespace std;
int a[10000000];
int main()
{
    cout<<"�аݧA�Q�n�X�ӽ��? (�̤j����Ƥ��W�L10000000,�е��p�@�I) ";
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
