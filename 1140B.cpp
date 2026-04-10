#include<bits/stdc++.h>
using namespace std;
int result()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int left=0, right=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='<')
        {
            left++;
        }
        else
        {
            break;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(s[i]=='>')
        {
            right++;
        }
        else
        {
            break;
        }
    }

    return min(left, right);
    
    
}
int main()
{
    int mrm;
    cin>>mrm;
    while(mrm--)
    {
        cout<<result()<<endl;
    }
    return 0;
}