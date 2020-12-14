#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define ll long long

#define pb push_back


ll bs(vector<ll> check, ll key){
    ll n = check.size();
    for(ll i=0; i<n; i++)
    {
        if(check[i]==key)
        {
            return i;
        }
    }

    return -1;
}

ll highestPowerof2(ll n)
{
   ll p = (ll)log2(n);
   return (ll)1<<p;
}

void smallestSequence()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,x;
        cin >> n >> x;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }

        if(n==2)
        {
            for(int i=1; i<n; i++)
            {
                a[i]^=a[0];
            }
            a[0]=0;

            if(x%2==0)
            {
                a[0]^=1;
                for(int i=1; i<n; i++)
                {
                    a[i]^=1;
                }   
            }
            
            for(ll i=0;i<n;i++)
            {
                cout << a[i] <<" ";
            }
            cout << endl;
            continue;
        }
        ll temp = x;
        x = 2*x;

        vector <ll> check;
        ll i;
        ll flag=0;
        for(i=0;i<n;i++)
        {
            ll p=1;
            while(a[i]!=0 && x>0)
            {
                if(bs(check, highestPowerof2(a[i]))>=0)
                {
                    check.erase(check.begin()+ bs(check, highestPowerof2(a[i])));
                }
                else{
                    if(temp>0)
                    {
                        check.pb(highestPowerof2(a[i]));
                        temp--;
                    }else {
                        ll j = 0;
                        ll si = check.size();
                        for(j=0; j<si; j++)
                        {
                            ll res = check[j]^a[i];
                            if(res<=a[i])
                            {
                                a[i]^=check[j];
                                x--;
                                check.erase(check.begin()+j);
                                j--;
                                si--;
                            }
                        }
                        break;
                    }
                }
                a[i]^=highestPowerof2(a[i]);
                x--;
            }

            if(a[i]!=0)
            {
                flag=1;
            }
        }
        
        // if(flag==0 && temp>0 && (temp*2)==x)
        // {
        //  if(temp%2==1)
        //  {
        //      a[n-1]=a[n-2]=1;
        //  }
        // }

        while(x>=0 && !check.empty())
        {
            a[i-1]^=check[0];
            check.erase(check.begin());
        }

        for(ll i=0;i<n;i++)
        {
            cout << a[i] <<" ";
        }
        cout << endl;
    }
}


int main()
{
    fast;

    smallestSequence();

    return 0;
}