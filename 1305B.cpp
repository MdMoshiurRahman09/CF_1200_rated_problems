#include<bits/stdc++.h>
using namespace std;

void somadhan()
{
    string s;
    cin>>s;
    int l=0, r=s.size()-1;
    vector<int>ans;
    while(l<r)
    {
        if(s[l]=='(' && s[r]==')')
        {
            ans.push_back(l+1);
            ans.push_back(r+1);
            l++;
            r--;
        }
        else if(s[l]==')')
        {
            l++;
        }
        else if(s[r]=='(')
        {
            r--;
        }
    }
    sort(ans.begin(), ans.end());
    if(ans.size()==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
        cout<<ans.size()<<endl;
        for(auto &val: ans)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    somadhan();
    return 0;
}