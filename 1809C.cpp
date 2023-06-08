#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if (a[0] >= 0)
        {
            cout << "No\n";
            continue;
        }
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= 0)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";
        int i = 0, j = n-1;
        while (i < j)
        {
            cout << a[j] << " " << a[i] << " ";
            i++;
            j--;
        }
        if (n % 2 == 1)
        {
            cout << a[i];
        }
        cout << "\n";
    }
    return 0;
}