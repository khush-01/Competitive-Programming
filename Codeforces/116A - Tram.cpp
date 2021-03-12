
// Problem: A. Tram
// Contest: Codeforces - Codeforces Beta Round #87 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/116/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
 
    int t, c = 0, cap = 0;
    cin >> t;
    while (t--) {
    	int o, i;
    	cin >> o >> i;
    	c = c - o + i;
    	cap = max(cap, c);
    }
    cout << cap;
 
    return 0;
}
