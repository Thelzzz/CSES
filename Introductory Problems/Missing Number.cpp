#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<int> a(n - 1);
    for (int &x : a)
        cin >> x;
 
    vector<bool> was(n + 1);
    for (int &x : a)
        was[x] = true;
 
    int ans = 1;
    while (was[ans])
        ans++;
 
    cout << ans;
    return 0;
}
