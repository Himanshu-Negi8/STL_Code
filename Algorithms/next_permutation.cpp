#include<bits/stdc++.h>


#define mk(arr,n,type)     	type*arr = new type[n];
#define w(t)    			int t; cin>>t; while(t--)
#define pb              	push_back
#define mod 				1000000007


using namespace std;

int main()
{
	int arr[] = {10,20,30,40,50};
	int n = sizeof(arr)/sizeof(n);
	rotate(arr,arr+2,arr+n);
	// rotate(begin,index from where rotate,arrat end)
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	//Apply the same in the vector
	
	
	vector<int>v = { 10,20,30,40,50};
//	rotate(v.begin(),v.begin()+3,v.end());
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	
	
	//next permutation method
	
	next_permutation(v.begin(),v.end());
	next_permutation(v.begin(),v.end());
	cout<<endl;
	//for each loop
	for(int x:v)
	{
		cout<<x<<" ";
	}
	return 0;
}
