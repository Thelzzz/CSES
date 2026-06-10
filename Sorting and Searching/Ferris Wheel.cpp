#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w;
    cin >> n >> w;

    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    sort(a.begin(), a.end());
    int ans = n, l = 0, r = n - 1;
    while (l < r) {
        if (a[l] + a[r] <= w) {
            ans--;
            l++;
            r--;
        }

        else
            r--;
    }

    cout << ans;
    return 0;
}
