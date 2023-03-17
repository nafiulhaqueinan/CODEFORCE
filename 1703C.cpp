#include<bits/stdc++.h>
using namespace std;

void solve(){
  int num_wheel;cin>>num_wheel;
  std::vector<int> v;
  for(int i=0;i<num_wheel;i++){
  	int n;cin>>n;
  	v.push_back(n);
  }
  for(int i=0;i<num_wheel;i++){
  	int a;cin>>a;
  	//cout<<a<<endl;
  	for(int j=0;j<a;j++){
  		char cha;cin>>cha;
  		if(cha=='D')
  			v[i]++;
  		else
  			v[i]--;
  	}
  }
  for(auto x:v){
  	if(x%10<0)
  		cout<<10-abs(x%10)<<" ";
  	else
  		cout<<x%10<<" ";
  }
  cout<<endl;

}




int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
		int t;
		cin>>t;
		while(t--){
			solve();
		}
	return 0;

}