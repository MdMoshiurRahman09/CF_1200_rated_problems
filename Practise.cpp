#include<bits/stdc++.h>
using namespace std;

bool somadhan(string s)
{
    int len=s.size();
    if(s[0]=='1' && s[1]=='0')
    {
        if(s[2]>='2')
        {
            return true;
        }
        else if(len>=4 && s[2]=='1' && s[3]>='0')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
int main()
{
    int mrm;
    cin>>mrm;
    while(mrm--)
    {
        string s;
        cin>>s;
        if(somadhan(s))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}