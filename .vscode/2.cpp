/*
Problem Link: 
#############################################
Author: Siddharth Mishra
GitHub: https://github.com/Hard-Coder05
#############################################
*/
#include <bits/stdc++.h>
#include <iostream>
#define endl "\n"
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define ull unsigned long long
#define MOD 1000000007
#define INF 1000000000000000003
using namespace std;
typedef long long int ll;
void FindAllElements(int n, int k) 
{ 
    int sum = k; 
    int A[k]; 
    fill(A, A + k, 0); 
    for (int i = k - 1; i >= 0; --i) { 
        while (sum + A[i] <= n) { 
            sum += A[i]; 
            A[i] *= 2; 
        } 
    } 
    if (sum != n) { 
        cout << -1<<endl; 
    } 
    else { 
        for (int i = 0; i < k; ++i) {
        switch(A[i]){
            case 0:
            cout<<"a";
            break;
            case 1:
            cout<<"b";
            break;
            case 2:
            cout<<"c";
            break;
            case 3:
            cout<<"d";
            break;
            case 4:
            cout<<"e";
            break;
            case 5:
            cout<<"f";
            break;
            case 6:
            cout<<"g";
            break;
            case 7:
            cout<<"h";
            break;
            case 8:
            cout<<"i";
            break;
            case 9:
            cout<<"j";
            break;
            case 10:
            cout<<"k";
            break;
            case 11:
            cout<<"l";
            break;
            case 12:
            cout<<"m";
            break;
            case 13:
            cout<<"n";
            break;
            case 14:
            cout<<"o";
            break;
            case 15:
            cout<<"p";
            break;
            case 16:
            cout<<"q";
            break;
            case 17:
            cout<<"r";
            break;
            case 18:
            cout<<"s";
            break;
            case 19:
            cout<<"t";
            break;
            case 20:
            cout<<"u";
            break;
            case 21:
            cout<<"v";
            break;
            case 22:
            cout<<"w";
            break;
            case 23:
            cout<<"x";
            break;
            case 24:
            cout<<"y";
            break;
            case 25:
            cout<<"z";
            break;
        }}
    } 
    cout<<endl;
} 
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll tc;
	cin >> tc;
	while (tc--) {
		ll n,k;
		cin >> n>>k;
		FindAllElements(n,k);
	}
}
