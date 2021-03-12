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

int32_t main() {
    fast

    int n, a = 0, b = 0, w = 0, l = 0;
    cin >> n;

    while(n--) {
        int x, y, curr;
        cin >> x >> y;
        a += x;
        b += y;
        if (a > b) {
            curr = a - b;
            if (curr > l) {
                l = curr;
                w = 1;
            }
        }
        else {
            curr = b - a;
            if (curr > l) {
                l = curr;
                w = 2;
            }
        }
    }
    cout << w << " " << l;

    return 0;
}
