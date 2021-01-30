#include <bits/stdc++.h>
using namespace std;

int ceilIndex(int tail[], int l, int r, int x) {
        while(l < r) {
            int mid = l + (r-l)/2;
            
            if(tail[mid] >= x) {
                r = mid;
            } else {
                l = mid+1;
            }
        }
        
        return r;
    }
    
    int LIS(vector<int> arr, int n) {
        int tail[n];
        
        tail[0] = arr[0];
        int len = 1;
        
        for(int i = 1; i < n; i++) {
            if(arr[i] > tail[len-1]) {
                tail[len] = arr[i];
                len++;
            } else {
                int c = ceilIndex(tail, 0, len-1, arr[i]);
                tail[c] = arr[i];
            }
        }
        
        return len;
    }

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    vector<int> a={1,1,0,1,0,0,0,0,1,0,1,1,0,1,1,1,0,1,0};
    cout <<  a.size() - LIS(a, a.size()) << endl;
    return 0;
}
