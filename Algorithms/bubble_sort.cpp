#include<iostream>

#define mk(arr,n,type)     	type*arr = new type[n];

using namespace std;

bool compare(int a,int b)
{
	return a>b;
}

void bubble_sort(int a[],int n)
{
	//n-1 large elements to the end
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(compare(a[j],a[j+1]))
			{
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	mk(arr,n,int);
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	bubble_sort(arr,n);
	for( int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}


