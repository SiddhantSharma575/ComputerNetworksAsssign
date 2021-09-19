#include <iostream>
using namespace std;
int main()
{
int n;
int count=0;
cout<<"Enter no of bits : ";
cin>>n;
int ar[n];
int a[8]={0,1,1,1,1,1,1,0};
cout<<"Enter bits of data : ";

//Taking input of bites
for(int i=0;i<n;i++)
{
	cin>>ar[i];
}

for(int i=0;i<8;i++)
{
	cout<<a[i];
}
for (int i=0;i<n;i++)
{
	cout<<ar[i];
	if(ar[i]==1)
	{
		count++;
	}
	else
	{
		count=0;
	}
	
	if(count==5)
	{
		cout<<"0";
	}
	}

for(int i=0;i<8;i++)
{
	cout<<a[i];
}
return 0;	
}
