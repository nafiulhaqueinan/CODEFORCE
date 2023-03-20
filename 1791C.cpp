#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin>>n;
	int count=n;
	string s;cin>>s;
	//cout<<s<<endl;
	int i=0,j=n-1;
	for(;i<j;i++,j--){
		//cout<<s[i]<<" "<<s[j];
		if(s[i]=='0' and s[j]=='1' )
			count-=2;
		else if(s[i]=='1' and s[j]=='0')
			count-=2;
		else
			break;
	}
	cout<<count<<endl;
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	// string i="inan";
	// i[0]=' ';
	// cout<<i;
	// cout<<10;
		int t;
		cin>>t;
		while(t--){
			solve();
		}
	
	
	return 0;

}