#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    auto oldArr=v;

    for(int i=1; i<n; i++)
    {
        v[i]=abs(v[i]);
    }
    v[n-1]*=-1;

    for(int i=1; i<n; i++)
    {
        v[i]+=v[i-1];
        oldArr[i]+=oldArr[i-1];
    }

    long long ans=INT_MIN;

    for(int i=0; i<n; i++)
    {
        long long left = i ? v[i-1] : 0;

        long long right=oldArr[n-1]-oldArr[i];

        ans=max(ans, left-right);
    }
    cout<<ans<<endl;
}

int main()
{
    int mrm;
    cin>>mrm;
    while(mrm--)
    {
        solve();
    }
    return 0;
}