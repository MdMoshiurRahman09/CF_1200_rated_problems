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

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<int>v;
    vector<string> st;
    for(int i=0; i<n; i++)
    {
        string s;
        getline(cin, s);
        st.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        cout << vowel_count(st[i]) << " ";
    }
    cout<<endl;
    
    

    return 0;
}