#include <bits/stdc++.h>
using namespace std;

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
