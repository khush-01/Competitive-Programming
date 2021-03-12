
// Problem: A. George and Accommodation
// Contest: Codeforces - Codeforces Round #267 (Div. 2)
// URL: https://codeforces.com/problemset/problem/467/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define fo(i,n) for(int i=0; i<n; i++)
#define lfo(i, m, n) for(int i=m; i<n; i++)
#define rfo(i,n) for(int i=n-1; i>=0; i--)
#define vi vector<int>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
int32_t main() {
    fast
 
    int t, c = 0;
    cin >> t;
    while (t--) {
    	int p, q;
    	cin >> p >> q;
    	if(q - p >= 2)
    		c++;
    }
    cout << c;
 
    return 0;
}
