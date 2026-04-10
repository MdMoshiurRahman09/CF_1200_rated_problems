#include<bits/stdc++.h>
using namespace std;

int vowel_count(string s)
{
    int ans=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
        {
            ans++;
        }
    }
    return ans;
}

void solve()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<int>v(n), vowel;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        string s;
        getline(cin, s);
        vowel.push_back(vowel_count(s));
    }
    bool ok=true;

    for(int i=0; i<n; i++)
    {
        if(v[i]!=vowel[i])
        {
            ok=false;
            break;
        }
    }
    if(ok)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
int main()
{

    solve();
    return 0;
}