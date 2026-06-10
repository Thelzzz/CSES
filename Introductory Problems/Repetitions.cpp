#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size(), ans = 0;
    for (int i = 0; i < n; i++) {
        int j = i + 1;
        while (j < n && s[i] == s[j])
            j++;

        ans = max(ans, j - i);
        i = j - 1;
    }

    cout << ans;
    return 0;
}
