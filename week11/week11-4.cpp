#include <iostream>
int a[100];
using namespace std;
int main()
{
	for (int i=0; i < 100; i++)
	{
		cin>>a[i];
	}
	for(int k=0; k < 100; k++)
	{
	for(int i=0; i < 100-1; i++)
	{
		if(a[i] > a[i+1])
		{
		int temp=a[i];
		a[i]= a[i+1];
		a[i+1] = temp;
		}
	}
	}

	for(int i=0; i<100; i++)
	{
		cout<<a[i]<<"\n";
	}
}
