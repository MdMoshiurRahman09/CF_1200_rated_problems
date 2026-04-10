#include<bits/stdc++.h>
using namespace std;

int minimumDistance(vector<int>&v)
{
    unordered_map<int, int> lastSeen;

    int minDist=INT_MAX;

    for(int i=0; i<v.size(); i++)
    {
        if(lastSeen.count(v[i]))
        {
            int dist=i-lastSeen[v[i]];
            minDist=min(dist, minDist);
        }
        lastSeen[v[i]]=i;
    }

    if(minDist==INT_MAX)
    {
        return -1;
    }
    else
    {
        return minDist;
    }
}

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int result=minimumDistance(v);
    if(result==-1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<result+1<<endl;
    }
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