#include<bits/stdc++.h>
using namespace std;


int main()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(1);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(3);
	int index=1;
	for(int i=0;i<v.size()-1;i++)
	{
		if(v[i]!=v[i+1]){
			v[index++]=v[i+1];
		}
	}
	 
        for(int i=0;i<index;i++)
        {
         cout<<v[i]<<" ";   
        }
        cout<<endl;
	cout<<index<<endl;;


	return 0;
	
}
