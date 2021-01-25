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
const int d=1000000;
vector<int> v;
int arr[d+5];
bool prime[d + 5];
void calc(int n)
{
    
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for(int i=5;i<=d;i++){
		arr[i]=arr[i-1];
		if(prime[i]&&prime[i-2]){
			arr[i]++;
		}
	}
}
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
calc(d);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin>>n;
		cout<<arr[n]<<"\n";
		
	}
}