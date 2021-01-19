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
bool isPrime(int n)  
{  
    if (n <= 1)  return false;  
    if (n <= 3)  return true;  
    if (n%2 == 0 || n%3 == 0) return false;  
    
    for (int i=5; i*i<=n; i=i+6)  
        if (n%i == 0 || n%(i+2) == 0)  
           return false;  
    
    return true;  
}  
int nextPrime(int N) 
{ 
    if (N <= 1) 
        return 2; 
    int prime = N; 
    bool found = false; 
    while (!found) { 
        prime++; 
  
        if (isPrime(prime)) 
            found = true; 
    } 
    return prime; 
}
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		int a=nextPrime(1+n);
		int b=nextPrime(a+n);
		cout<<a*b<<endl;
	}
}
