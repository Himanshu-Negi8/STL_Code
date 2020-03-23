#include<bits/stdc++.h>
#define mk(arr,n,type)  type*arr = new type[n];
#define w(t)    int t; cin>>t; while(t--)

using namespace std;
template <class ForwardIterator, class T,class Compare>

ForwardIterator search(ForwardIterator start,ForwardIterator end, T key, Compare cmp)
{
	while(start!=end)
	{
		if(cmp(*start,key))
		{
			return start;
		}
		start++;
	}
	return end;
}

class Book{
	public:
		string name;
		int price;
	Book()
	{
		
	}
	
	Book(string name,int price)
	{
		this->name =name;
		this->price=price;
	}
};


class BookCompare{
	
public:
	bool operator()(Book A,Book B)
	{
		if(A.name==B.name)
		{
			return true;
		}
		return false;
	}
};

int main()
{
	Book b1("c++",100);
	Book b2("python",120);
	Book b3("java",130);
	Book b4(b1);
	
	list<Book>l;
	l.push_back(b1);
	l.push_back(b2);
	l.push_back(b3);
	
	Book bookToFind("c++",110);
	BookCompare cmp;
	
	auto it = search(l.begin(),l.end(),bookToFind,cmp);
	if(it!=l.end())
	{
		cout<<"Book is found in the library"<<endl;
	}
	/*
	BookCompare cmp;
	if(cmp(b1,bookToFind))
	{
		cout<<"True";
	}
	*/

}


