
// Problem: A. Park Lighting
// Contest: Codeforces - Codeforces Round #645 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1358/A
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
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main() {
    fast

    int t;
    cin >> t;
    while (t--) {
    	int n, m;
    	cin >> n >> m;
    	
    	int lights = n * m / 2;
    	
    	if(n % 2 && m % 2)
    		cout << lights + 1;
    	else
    		cout << lights;
    	
    	cout << endl;
    }

    return 0;
}
