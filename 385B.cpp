#include<bits/stdc++.h>
using namespace std;

int solve(string s)
{
    int ans=0;

    size_t pos=s.find("bear");

    while(pos!=string::npos)
    {
        int before=pos;
        int after=s.size()-pos-3;
        if(before==0)
        {
            ans+=after;
        }
        else
        {
            ans+=(after*before);
        }
        pos=s.find("bear", pos+1);
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<solve(s)<<endl;
    return 0;
}