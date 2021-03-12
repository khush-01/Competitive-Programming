
// Problem: A. Mishka and Game
// Contest: Codeforces - Codeforces Round #365 (Div. 2)
// URL: https://codeforces.com/problemset/problem/703/A
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
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
int32_t main() {
    fast
 
    int t, c = 0;
    cin >> t;
    while (t--) {
    	int a, b;
    	cin >> a >> b;
    	
    	if(a > b)
    		c++;
    	else if(a < b)
    		c--;
    	
    	// cout << endl;
    }
    if(c > 0)
    	cout << "Mishka";
    else if(c < 0)
    	cout << "Chris";
    else
    	cout << "Friendship is magic!^^";
 
    return 0;
}
