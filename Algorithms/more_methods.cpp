#include<bits/stdc++.h>


#define mk(arr,n,type)     	type*arr = new type[n];
#define w(t)    			int t; cin>>t; while(t--)
#define pb              	push_back
#define mod 				1000000007


using namespace std;

int main()
{
	int a =10;
	int b=20;
	swap(a,b);
	cout<<a <<" and "<<b<<endl;;
	cout<<max(a,b)<<"\n";
	cout<<min(a,b)<<"\n";
	
	cout<<"Reversing the array : "<<endl;
	
	int arr[] ={1,2,3,4,4,5};
	reverse(arr,arr+6); //arr,arr+n to reverse 
	
	int n = sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	next_permutation(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
