#include<bits/stdc++.h>


#define mk(arr,n,type)  type*arr = new type[n];
#define w(t)    		int t; cin>>t; while(t--)
#define pb              push_back
#define mp              make_pair
#define mod 			1000000007


using namespace std;


bool isPalindrome(string s)
{
	string r = s;
	reverse(r.begin(),r.end());
	return r==s;
}
int main()
{
	cout<<isPalindrome("aba")<<endl;
	
	string s = "bca";

   do {
        cout << s << ' ';
    } while(next_permutation(s.begin(), s.end()));

 	cout << s;
	return 0;
}
