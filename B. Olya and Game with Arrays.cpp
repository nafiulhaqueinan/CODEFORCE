#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Portal {
    int l, r, a, b;
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<Portal> portals(n);
        for (int i = 0; i < n; i++) {
            cin >> portals[i].l >> portals[i].r >> portals[i].a >> portals[i].b;
        }

        sort(portals.begin(), portals.end(), [](const Portal& p1, const Portal& p2) {
            return p1.r < p2.r;
        });

        int q;
        cin >> q;

        vector<int> startPositions(q);
        for (int i = 0; i < q; i++) {
            cin >> startPositions[i];
        }

        vector<int> maxEscape(q, 0);

        int portalIndex = 0;

        for (int i = 0; i < q; i++) {
            while (portalIndex < n && portals[portalIndex].r < startPositions[i]) {
                portalIndex++;
            }
            
            if (portalIndex < n && portals[portalIndex].l <= startPositions[i]) {
                maxEscape[i] = max(maxEscape[i], min(portals[portalIndex].b, portals[portalIndex].a + (startPositions[i] - portals[portalIndex].l)));
            }
        }

        int currentMax = 0;
        for (int i = q - 1; i >= 0; i--) {
            currentMax = max(currentMax, maxEscape[i]);
            maxEscape[i] = currentMax;
        }

        for (int i = 0; i < q; i++) {
            cout << maxEscape[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
