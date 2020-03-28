#include<iostream>
#include<algorithm>

using namespace std;

#define mk(arr,n,type)     	type*arr = new type[n];


//Define a comparator 

bool compare(int a,int b)
{
	return a>b; //for decreasing order
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
	sort(arr,arr+n,compare);
	/*
	in this we are not calling a function instead
	 we are sending a function as a parameter to 
	 another function
	 */
	for( int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
