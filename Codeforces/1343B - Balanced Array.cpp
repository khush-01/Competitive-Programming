
// Problem: B. Balanced Array
// Contest: Codeforces - Codeforces Round #636 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1343/B
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
 
    int t;
    cin >> t;
    while (t--) {
    	int n, s1 = 0, s2 = 0;
    	cin >> n;
    	vi v(n);
    	
    	if(n % 4)
    		cout << "NO";
    	else {
    		cout << "YES" << endl;
    		for(int i = 2; i <= n; i += 2){
                cout << i << " ";
                s1 += i;
            }
            for(int i = 1; i < n-2; i += 2){
                cout << i << " ";
                s2 += i;
            }
            cout << s1 - s2;
        }
    	
    	cout << endl;
    }
 
    return 0;
}
