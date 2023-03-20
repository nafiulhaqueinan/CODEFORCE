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
			int n;cin>>n;
			int arr[n];
			int arr2[n];
			for(int i=0;i<n;i++){
				cin>>arr[i];
				arr2[i]=arr[i];
			}
			// for(int x:arr2)
			// 	cout<<x<<" ";
			// cout<<endl;
			sort(arr,arr+n);
			// for(int x:arr)
			//  	cout<<x<<" ";
			//  cout<<endl;
			for(int i=0;i<n;i++){
				if(arr2[i]!=arr[1]){
					cout<<i+1<<"\n";
				}
			}
		}
	
	
	return 0;

}