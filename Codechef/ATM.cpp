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

    int with;
    float bal;
    cin >> with >> bal;
    cout << fixed << setprecision(2);
    if (with % 5 == 0 && bal > with + 0.5)
        cout << (bal - with - 0.5);
    else
        cout << bal;    

    return 0;
}
