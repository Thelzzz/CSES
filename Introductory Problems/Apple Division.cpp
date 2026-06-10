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
    for (int &val : a)
        cin >> val;

    long long ans = inf;
    for (int mask = 1; mask < (1 << n); mask++) {
        long long sum = 0;
        for (int i = 0; i < n; i++)
            sum += (mask & (1 << i) ? a[i] : -a[i]);

        ans = min(ans, abs(sum));
    }

    cout << ans;
    return 0;
}
