#include<bits/stdc++.h>
using namespace std;

bool isbeautiful(int num){
	int a= num%10;
	int b=(num/10)%10;if(a==b) return 0;
	int c=(num/100)%10;if(a==c || b==c) return 0;
	int d=(num/1000)%10;if(d==a || d==c || d==b) return 0;
	return 1;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
		int a;
		cin>>a;
		int nxt=a+1;
		while(true){
			if(isbeautiful(nxt)){
				cout<<nxt;
				break;
			}else{
				nxt++;
			}
		}
	return 0;
}