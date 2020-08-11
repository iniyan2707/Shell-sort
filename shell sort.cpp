#include<stdio.h>
#include<iostream>
using namespace std;


void shellsort(int a[],int n)
{
	for(int gap=n/2;gap>0;gap=gap/2)
	{
		for(int j=gap;j<n;j++)
		{
			for(int i=j-gap;i>=0;i=i-gap)
			{
				if(a[i+gap]>a[i])
				{
					break;
				}
				else
				{
					//swap a[i],a[i+gap]
					int temp=a[i];
					a[i]=a[i+gap];
					a[i+gap]=temp;
				}
			}
		}
	}
}
 void printarray(int a[],int n)
 {
 	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
 		
 }

int main()
{
	int n,a[100];
	cout<<"Enter n:"<<endl;
	cin>>n;
	cout<<"Enter array elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Array before sorting:"<<endl;
	printarray(a,n);
	shellsort(a,n);
	cout<<"Array after sorting:"<<endl;
	printarray(a,n);
}
