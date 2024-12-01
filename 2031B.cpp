#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    vector<int> arr(n);

    for(auto &x : arr) cin >> x;

    for(int i = 0; i < n - 1; i++){
        if(arr[i] != i + 1){
            if(arr[i + 1] == i + 1 && arr[i] == i + 2) swap(arr[i], arr[i + 1]);
            else{
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while(t--){
        solve();
    }
}
