#include<bits/stdc++.h>
using namespace std;
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
		int a;
		cin>>a;
		string s;cin>>s;
		for(int i=0;i<a;i++){
			if(s[i]=='o')
			{
				if(i+2 and s.substr(i,3)=="ogo")
				{
					while(i+2<a and s.substr(i,3)=="ogo")i+=2;
					cout<<"***";
				}
				else
					cout<<"o";
			}
			else
				cout<<s[i];
		}

	
	
	return 0;

}