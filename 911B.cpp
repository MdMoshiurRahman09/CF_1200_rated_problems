#include<bits/stdc++.h>
using namespace std;

bool possible(int x, int a, int b, int n)
{
    if(x==0)
    {
        return true;
    }
    int plate_a=a/x;
    int plate_b=b/x;

    if(plate_a+plate_b>=n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve()
{
    int n, a, b;
    cin>>n>>a>>b;

    int ans=1;
    int l=0, h=(a+b)/n;

    while(l<=h)
    {
        int mid=l+(h-l)/2;

        if(possible(mid, a,b,n))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    solve();
    return 0;
}