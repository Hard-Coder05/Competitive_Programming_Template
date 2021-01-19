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
string updateString(string S,  
                    string A, string B) 
{   int l = A.length(); 
    for (int i = 0; i + l <= S.length(); i++) 
    { 
        string curr = S.substr(i, i + l); 
        if (curr == A)  
        { 
            string new_string = ""; 
            new_string += S.substr(0, i) + B +  
                          S.substr(i + l, S.length()); 
            S = new_string; 
            i += l - 1; 
        } 
        else
        { 
            string new_string = ""; 
            new_string += S.substr(0, i) + A +  
                          S.substr(i + l, S.length()); 
            S = new_string; 
            i += l - 1; 
        } 
    } 
    return S; 
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
		string s;
		cin>>s;
		char c;
		cout<<"1";
		if(s[0]=='0')
		c='1';
		else
		c='2';
		for(int i=1;i<n;i++){
			if(s[i]=='1'){
				if(c=='2'){
					cout<<'0';
					c='1';
				}
				else{
					cout<<'1';
					c='2';
				}
			}
			else{
				if(c=='2'){
					cout<<'1';
					c='1';
				}
				else if(c=='1'){
					cout<<'0';
					c='0';
				}
				else{
					cout<<'1';
					c='1';
				}
			}
		}
		cout<<endl;
		
	}
}
