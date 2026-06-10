#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    map<int, int> ind;
    for (int i = 0; i < n; i++) {
        if (ind.find(s - a[i]) != ind.end()) {
            cout << ind[s - a[i]] + 1 << ' ' << i + 1;
            return 0;
        }

        ind[a[i]] = i;
    }

    cout << "IMPOSSIBLE";
    return 0;
}
