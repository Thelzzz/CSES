#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    set<int> s;
    for (int &x : a)
        s.insert(x);

    cout << s.size();
    return 0;
}
