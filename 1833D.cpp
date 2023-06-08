#include<bits/stdc++.h>
using namespace std;
#define endl        "\n"
#define int         long long int
#define pb          push_back
#define pf          push_front
#define F           first
#define S           second
#define vint		std::vector<int> 
#define mp          midpoint
#define READ(x)     freopen(x,"r",stdin)
#define WRITE(x)    freopen(x,"w",stdout)
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define chk         printf("Came Here!!!!!!!!!!!!!!!\n")
#define bug(...) __f (#__VA_ARGS__,__VA_ARGS__)
#define fr(i,n)     for(int i=0; i<(n); i++)
#define rep(i,a,n)  for(int i=(a);i<=(n);i++)
#define fat(n)		for(auto x:n)
#define srt(v)      sort(v.begin(),v.end())
#define all(v)      v.begin(),v.end()
int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
		int t;
		cin>>t;
		while(t--){
			int n;cin>>n;
   vint a(n);
   fr(i,n){
   	cin>>a[i];
   }
   if(n==1){
   	fr(i,n){
   		cout<<a[i]<<endl;
   	}
   	continue;
   }
   int x=n;
   fr(i,n){
   	if(a[i]==x){
   		x--;
   	}
   	else break;
   }
   if(x==0){
   	for(int i=n-1;i>=1;i--){
   		cout<<i<<" ";
   	}
   	cout<<n<<endl;
   continue;
   }
   int start;
   fr(i,n){
   	if(a[i]==x){
   		start=i-1;
   		break;
   	}
   }
   if(start==n-2){
   	start++;
   }
   int r=start;
   vint ans;
   for(int l=start;l>=0;l--){
   	vint dex;
   	for(int i=start+1;i<n;i++){
   		dex.pb(a[i]);
   	}
   	for(int i=r;i>=l;i--){
   		dex.pb(a[i]);
   	}
   	fr(i,l){
   		dex.pb(a[i]);
   	}
   	if(ans.empty()){
   		ans=dex;
   	}else{
   		ans=max(ans,dex);
   	}
   }
   int l=0;
   for(int r=0;r<n;r++){
   	vint dex;
   	for(int i=r+1;i<n;i++){
   		dex.pb(a[i]);
   	}
   	for(int i=r;i>=l;i--){
   		dex.pb(a[i]);
   	}
   	if(ans.empty()){
   		ans=dex;
   	}else{
   		ans=max(ans,dex);
   	}
   }
   fr(i,n){
   	cout<<ans[i]<<" ";
   }
   cout<<endl;
		}
	
	
	return 0;

}