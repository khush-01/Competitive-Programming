#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1e9+7
#define int long long
#define float double
#define fo(i,n) for(int i=0; i<n; i++)
#define rfo(i,n) for(int i=n-1; i>=0; i--)
#define vi vector<int>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main() {
    fast

    int n;
    cin >> n;
    vi v(n);
    fo(i, n) cin >> v[i];

    sort(v.begin(), v.end());
    fo(i, n) cout << v[i] << endl;

    return 0;
}
