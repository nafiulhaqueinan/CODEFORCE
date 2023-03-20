#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
		long long int a;cin>>a;
		cout<<a<<" ";
		while(a!=1){
			if(a&1){
				a=(a*3)+1;
			}else{
				a/=2;
			}
			cout<<a<<" ";
		}


	return 0;

}