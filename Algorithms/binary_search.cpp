#include<bits/stdc++.h>


#define mk(arr,n,type)     	type*arr = new type[n];
#define w(t)    			int t; cin>>t; while(t--)
#define pb              	push_back


using namespace std;

int main()
{
	
	int arr[] = {1,2,3,40,40,40,50,56,89};
	int n = sizeof(arr)/sizeof(int);
	int key;
////	cin>>key;
//	bool present = binary_search(arr,arr+n,key);
//	if(present)
//	{
//		cout<<key<<" is present"<<endl;
//	}else{
//		cout<<"Not";
//	}
	
	/*get the index of element 
	lower bound  and upper bound of the key
	lower_bound(s,e,key) and upper_bound(s,e,key)*/
	
	//lower_bound
	auto lb = lower_bound(arr,arr+n,30);
	cout<<"Lower bound of 1 : "<<lb-arr<<endl;
	
	//upper_bound
	auto up = upper_bound(arr,arr+n,40);
	cout<<"Upper bound of 1 : "<<up-arr<<endl;
	//frequency is upper_bound - lower_bound
	cout<<up-lb<<endl;
	
	vector< int > data = { 1, 1, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 6 };
	auto lower = std::lower_bound(data.begin(), data.end(), 4);
	auto upper = std::upper_bound(data.begin(), data.end(), 4);
	for(auto it = lower; it != upper; it++)
	cout << *it << ' '; 
}
