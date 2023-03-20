#include<bits/stdc++.h>
using namespace std;
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
		int t;cin>>t;
		double temp=0;
		double d=t;
		while(t--){
			int a ;cin>>a;
			temp+=a;
		}
		cout<<temp/d;
	
	return 0;

}