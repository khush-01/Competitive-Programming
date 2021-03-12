
// Problem: A. Divisibility Problem
// Contest: Codeforces - Codeforces Round #629 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1328/A
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
 
    int t;
    cin >> t;
    while (t--) {
    	int a, b;
    	cin >> a >> b;
    	
    	int r = a % b;
    	if(r == 0)
    		cout << r << endl;
    	else
    		cout << b - r << endl;
    }
 
    return 0;
}
