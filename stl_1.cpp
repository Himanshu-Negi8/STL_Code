#include<bits/stdc++.h>
using namespace std;

//Linear Search but we want it work for all kind of data thenn we have to make it generic so for this we use template
template<typename T>

int search(T arr[],int n,T key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return n;
}

int main()
{
	
	int arr []= {1,2,3,4,10,12};
	int n =sizeof(arr)/sizeof(int);
	int key=10;
	cout<<search(arr,n,key)<<endl;
	char a[] = {'a','c','b','d'};
	char key1 =  'c';
	cout<<search(a,n,key1)<<endl;
}
