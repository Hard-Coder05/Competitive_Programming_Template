#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#define vi vector<int>
#define int long long int
#define fo(i,n) for(int i=1;i<=n;i++)
#define foo(i,n) for(int i=0;i<n;i++)
#define ff first
#define ss second
#define pb push_back
#define ok ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define vp vector<pair<int,int>>
#include <map>
#define mod 1000000007
               
                
int max(int a,int b){ if(a>b) return a; return b; }
int min(int a,int b){ if(a<b) return a; return b; }
int abbs(int a,int b){   if(a-b < 0) return b-a; return a-b; }

  struct hash_pair { 
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    { 
        auto hash1 = hash<T1>{}(p.first); 
        auto hash2 = hash<T2>{}(p.second); 
        return p.first%mod + p.second; 
    } 
}; 


void solve(){
    
    int n; cin>>n;
     if(n==1){
         int m;
         cin>>m;
         int neg=0,pos=0;
         foo(i,m){
             int x; cin>>x;
             if(x<0) neg++;
             else pos++;
         }
         int ans = neg*pos;
         cout<<ans<<"\n";
         return;
     }

    vi pos[n + 1], neg[n + 1];
    vi pos_size(n + 1), neg_size(n + 1); 
    map<int,int> mp,pnt;   
    vi points;
    // point -> freq
    map<int,int> my_line;
    fo(i,n){
        int m; cin>>m;
        while(m--){
            int x; cin>>x;
            if(x<0) {
                neg[i].pb(-x);
                neg_size[i]++;
                mp[-x]++;
                if(!pnt.count(-x)){
                    points.pb(-x);
                    pnt[-x] = 1;
                }
                my_line[-x] = -i;
            }
            else{
                pos[i].pb(x);
                pos_size[i]++;
                mp[x]++; 
                 if(!pnt.count(x)){
                    points.pb(x);
                    pnt[x] = 1;
                }
                my_line[x] = i;
            }
        }
    }


    fo(i,n){
       // sort(pos[i].begin(),pos[i].end());
        reverse(neg[i].begin(),neg[i].end());
    }
 
    unordered_map<pair<int, int>, int, hash_pair> findpos,findneg; 

    fo(l,n){
       vi p = pos[l];
       vi n = neg[l];

       // twopointers
      int i=0,j=0;
       int ps = p.size(), ng = n.size();
       while(i<ps && j<ng){
            findpos[{l,p[i]}] = 0;
           if(n[j]>p[i]){
               findpos[{l,p[i]}] = ng-j;
               i++;
           }
           else if(n[j]==p[i]) {
               i++, j++;
           }
           else {
               j++;
           }
       }


        i=0, j=0;
        while(i<ps && j<ng){
            findneg[{-l,n[j]}] = 0;
            if(n[j]<p[i]){
                findneg[{-l,n[j]}] = ps-i;
                j++;
            }
            else if(n[j]==p[i]) {
                i++, j++;
            }
            else {
                i++;
            }
        }
    }

    map<int,int> num_after;      // number of points after point p

    fo(i,n){
        // pos
        vi v = pos[i];
        int sz = pos[i].size();
        sz--;
        for(int x: v){
            if(sz<0) break;
            num_after[x]+=(sz--);
        }
        
        // neg
        vi t = neg[i];
        sz = neg[i].size();
        sz--;
        for(int x: t){
            if(sz<0) break;
            num_after[x]+=(sz--);
        }

    }

    // for(auto x: num_after){
    //     cout<<x.first<<" -> "<<x.second;
    //     cout<<"\n";
    // }

    int ans = 0;

    for(int p: points){
        if(mp[p]>1){
            ans++;
            int line_with_one = num_after[p];
            ans+=line_with_one;
        }
         else {
           int line = my_line[p];
           int v;
           if(line<0) {
               int modLine = -line;
               int have = 0;
                   have = findneg[{line,p}];
                 // no. of values greater than p in this opposite vector             
               if(have>=1){
                   ans++;
                   ans+=have-1;
               }
           }
           else {
               int have = 0;
                   have = findpos[{line,p}]; 
               if(have>=1){
                   ans++;
                   ans+=have-1;
               }
           }
         }
    }

    cout<<ans<<"\n";

} 
      
      
signed main(){
   ok
   int t;
   t = 1;
   cin>>t;
     while(t--){
      solve();
    }
}