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
void printDivisors(unsigned long long n)
{	if(n%2==1){
			cout<<"YES"<<endl;
			return;
		}
    for (unsigned long long i = 1; i <= sqrt(n); i++) {
        if ((n % i == 0)&&(i>1&&i&1)) {
			cout<<i<<endl;
			cout<<"YES"<<endl;
			return;
            }
        }
		cout<<"NO"<<endl;
			return;
}
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	unsigned long long tc;
	cin >> tc;
	while (tc--) {
		unsigned long long n;
		cin >> n;
		printDivisors(n);
	}
}
