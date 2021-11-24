#include <stdio.h>
#include <iostream>
using namespace std;
int a[10]={9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
int main()
{
    for(int i=0; i<10; i++)
        cout<<a[i]<<" "<<"\n";

    for(int k=0; k<100; k++)
    {
        for(int i=0; i<10-1; i++)
        {
            if( a[i] > a[i+1] )
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0; i<10; i++)
        cout<<a[i]<<" "<<"\n";
    }
}
