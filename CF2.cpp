/*
Problem Link: 
#############################################
Author: Siddharth Mishra
GitHub: https://github.com/Hard-Coder05
#############################################
*/
#include <bits/stdc++.h>
#define endl "\n"
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define MOD 1000000007
#define INF 1000000000000000003
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int tc;
	cin >> tc;
	while (tc--) {
		int a,b,k;
		cin >> a>>b>>k;
		int arr1[a],arr2[b];
		for(int i=0;i<k;i++)
		cin>>arr1[i];
		for(int i=0;i<k;i++)
		cin>>arr2[i];
		int count=0;
		for(int i=0;i<k-1;i++){
			int a1=arr1[i];
			int b1=arr2[i];
			for(int j=i+1;j<k;j++){
				if(a1!=arr1[j]&&b1!=arr2[j]){
					count++;
				}
			}
		}
		cout<<count<<endl;				
	}
}
