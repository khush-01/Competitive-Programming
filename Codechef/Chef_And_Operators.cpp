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

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a > b)
            cout << ">" << endl;
        else if (a < b)
            cout << "<" << endl;
        else
            cout << "=" << endl; 
    }

    return 0;
}
