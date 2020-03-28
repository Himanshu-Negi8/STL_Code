#include<bits/stdc++.h>


#define mk(arr,n,type)     	type*arr = new type[n];
#define w(t)    			int t; cin>>t; while(t--)
#define pb              	push_back
#define mod 				1000000007
#define int                 long long

using namespace std;

bool compare(int a,int b)
{
	return a>b;
}
void bubble_sort(int arr[],int n,bool (&cmp)(int a,int b))
{
	//n-1 large elements to the end
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(compare(arr[j],arr[j+1]))
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

int32_t main()
{
	int n;
	cin>>n;
	mk(arr,n,int);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	bubble_sort(arr,n,compare);
	
	for( int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
