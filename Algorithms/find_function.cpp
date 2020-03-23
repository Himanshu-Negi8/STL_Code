#include<bits/stdc++.h>
#include<algorithm>

using namespace std;


int main()
{
	int arr[]= {1,10,11,89,100};
	int n = sizeof(arr)/sizeof(int);
	int key=11;
	auto it = find(arr,arr+n,key);
	int index = it-arr;
	cout<<index<<endl;
	return 0;
}
