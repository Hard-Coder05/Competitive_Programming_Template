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
typedef long long int ll;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
string s;
cin>>s;
string a="hello";
ll b=0;
for(int i=0;i<s.size();i++){
if(s[i]==a[b]){
b++;}
if(b==5)
break;
}
if(b==5)
cout<<"YES"<<endl;
else
{
    cout<<"NO"<<endl;
}

}
