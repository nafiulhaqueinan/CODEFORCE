#include<bits/stdc++.h>
using namespace std;
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
		int t;
		cin>>t;
		while(t--){
			string pi="314159265358979323846264338327";
			int count=0;
			string ss;cin>>ss;
			for(int i=0;i<ss.length();i++){
				if(ss[i]==pi[i]){
					count++;
				}else{
					break;
				}
			}
			cout<<count<<"\n";
		}
	
	
	return 0;

}