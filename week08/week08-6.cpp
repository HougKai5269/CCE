#include <stdio.h>
int main()
{
    int i,j;
    int n;

    printf("請輸入大小:");
    scanf("%d",&n);
    printf("\n");

    for(int i=1; i<=n; i++)
   {
       for(int k=1; k<=i;k++)
        printf(" ");
        for(int k=1; k<=i;k++)
        printf("*");
        printf("\n");
   }
   return 0;
}
