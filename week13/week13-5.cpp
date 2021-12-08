#include <stdio.h>
#include <iostream>
using namespace std;
void printstar (int n)
{
    for(int i=0;i<n;i++) printf("*");
}
void printspace (int n)
{
    for(int i=0;i<n;i++) cout<<char(32);
}
int main()
{
    for(int i=1;i<10;i++)
    {
        printspace(9-i);
        printstar(i);
        printf("\n");
    }
}
