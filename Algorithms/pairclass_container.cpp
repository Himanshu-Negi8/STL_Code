#include<bits/stdc++.h>


#define mk(arr,n,type)  type*arr = new type[n];
#define w(t)    		int t; cin>>t; while(t--)
#define pb              push_back
#define mp              make_pair
#define mod 			1000000007


using namespace std;

int main()
{
	/*
		pair class helps us to bind two items in a single entity
	*/
	
	//pair
	pair<int,char>p;
	p.first=10;
	p.second = 'b';
	
	//another way
	
	pair<int,char>p2(p);
	cout<<p2.first<<" "<<p2.second<<endl;
	
	pair<int,string>p3 = make_pair(100,"Audi");
	cout<<p3.first<<" "<<p3.second<<endl;
	
	//take input;
	int a;
	string c;
	cin>>a>>c;
	pair<int,string>p4 = mp(a,c);
	cout<<p4.first<<" "<<p4.second<<endl;
	
	//pair of pairs
	
	pair<pair<int,int>,string>car;
	car.second="random name";
	car.first.first=200;
	car.first.second=100;
	
	cout<<car.second<<" "<<car.first.first<<" "<<car.first.second<<endl;
	
	return 0;
}
