#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define fo(i,n) for(int i=0; i<n; i++)
#define rfo(i,n) for(int i=n-1; i>=0; i--)
#define vi vector<int>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int fact(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fact(n-1);
}

int32_t main() {
    fast

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << fact(n) << endl;
    }

    return 0;
}
