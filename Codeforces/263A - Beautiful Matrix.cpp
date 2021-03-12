
// Problem: A. Beautiful Matrix
// Contest: Codeforces - Codeforces Round #161 (Div. 2)
// URL: https://codeforces.com/problemset/problem/263/A
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
	
	vector<vi> mat;
	vi vec(5);
	fo(i, 5) {
		fo(i, 5)
			cin >> vec[i];
		mat.pb(vec);
	}
	
	int row = 0, col = 0;
	while(mat[row][col] != 1){
		if(col < 5)
			col++;
		else{
			row++;
			col = 0;
		}
	}
	
	int steps = abs(2 - row) + abs(2 - col);
	cout << steps;

    return 0;
}
