#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ans = 1;
    for (int i = 0; i < n; i++)
        ans = (2 * ans) % mod;

    cout << ans;
    return 0;
}
