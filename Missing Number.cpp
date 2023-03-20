#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
		long long int a;cin>>a;
		long long int cnt=0;
		//long long int arr[a];
		for(int i=1;i<=a;i++){
			cnt+=i;
		}
		//cout<<cnt<<"\n";
		for(int i=1;i<a;i++){
			int t;cin>>t;
			//cout<<t<<endl;
			cnt=cnt-t;
		}
		cout<<cnt<<endl;


	return 0;

}