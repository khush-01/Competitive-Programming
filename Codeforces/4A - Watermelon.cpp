
// Problem: A. Watermelon
// Contest: Codeforces - Codeforces Beta Round #4 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/4/A
// Memory Limit: 64 MB
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
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main() {
    fast
    
    int weight;
    cin >> weight;
    
    if(weight > 2 && weight % 2 == 0)
    	cout << "YES";
    else
    	cout << "NO";

    return 0;
}
