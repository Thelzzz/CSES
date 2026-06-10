#include <bits/stdc++.h>

using namespace std;

const long long inf = 1e18;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    long long ans = -inf, curr = 0;
    for (int &x : a) {
        curr += x;
        ans = max(ans, curr);
        curr = max(curr, 0ll);
    }

    cout << ans;
    return 0;
}
