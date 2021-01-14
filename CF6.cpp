#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;


int main() {
    FIO;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    long long int n,m;
    cin>>n>>m;
    long long int a=INT_MIN;
    long long int b=INT_MAX;
    for(long long int i=0;i<m;i++){
        long long int x,y;
        cin>>x>>y;
        if(x<y){
            if(x>a)
                a=x;
            if(y<b)
                b=y;
        }
        else{
            if(y>a)
                a=y;
            if(x<b)
                b=x;
        }        
    }    
    if(m==0)
        cout<<n-1<<endl;
    else
        cout<<b-a<<endl;
    return 0;
}
