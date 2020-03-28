#include<bits/stdc++.h>


#define mk(arr,n,type)     	type*arr = new type[n];
#define w(t)    			int t; cin>>t; while(t--)
#define pb              	push_back
#define mod 				1000000007


using namespace std;

bool compare(int a,int b)
{
	return a<=b;
}
int main()
{
	
	int coins[] = {1,2,5,10,20,50,100,200,500,2000};
	int n = sizeof(coins)/sizeof(int);
	int money = 220;
	while(money>0)
	{
		int lb  = lower_bound(coins,coins+n,money,compare)-coins-1;
		
		int m = coins[lb];
		cout<<m<<",";
		money = money-m;
		
	}
	

	
	return 0;
}
