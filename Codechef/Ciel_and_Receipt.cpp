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

string bin(int n) {
    string b = "";
    int r;
    while(n) {
        r = n % 2;
        b = to_string(r) + b;
        n /= 2;
    }
    return b;
}

int count(string str) {
    int c = 0;
    fo(i, str.size())
        if (str[i] == '1')
            c++;
    return c;
}

int32_t main() {
    fast

    int t;
    cin >> t;
    while (t--) {
        int p;
        cin >> p;

        if (p < 4096)
            cout << count(bin(p)) << endl;
        else {
            int cnt = 0;
            while(p) {
                if (p >= 2048) {
                    cnt += 1;
                    p -= 2048;
                }
                else {
                    cnt += count(bin(p));
                }
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
