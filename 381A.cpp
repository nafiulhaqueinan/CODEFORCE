#include<bits/stdc++.h>

#define ll long long
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ll n,i;
    while(cin>>n)
    {
        ll a[n+2];
        for(i=1;i<=n;i++)
            cin>>a[i];
        ll left=1,right=n,sum1=0,sum2=0;
        i=1;
        while(left<=right)
        {
            if(i%2==1)
            {
                if(a[left]>=a[right])
                    sum1+=a[left++];
                else
                    sum1+=a[right--];
            }
            else
            {
                if(a[left]>=a[right])
                    sum2+=a[left++];
                else
                    sum2+=a[right--];
            }
            i++;
        }
        cout<<sum1<<" "<<sum2<<endl;
    }
    return 0;
}