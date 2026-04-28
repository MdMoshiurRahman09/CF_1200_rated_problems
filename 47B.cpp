#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s3;
    cin>>s1>>s2>>s3;
    
    string a1, a2,a3;
    if(s1=="A>B"||s1=="B<A")
    {
        a1="BA";
    }
    else
    {
        a1="AB";
    }

    if(s2=="B>C"||s2=="C<B")
    {
        a2="CB";
    }
    else
    {
        a2="BC";
    }

    if(s3=="A>C"||s3=="C<A")
    {
        a3="CA";
    }
    else
    {
        a3="AC";
    }

    if(a1=="AB" && a2=="BC" && a3=="AC")
    {
        cout<<"ABC"<<endl;
    }
    else if(a1=="AB" && a2=="CB"&& a3=="AC")
    {
        cout<<"ACB"<<endl;
    }
    else if(a1=="BA" && a2=="BC" && a3=="CA")
    {
        cout<<"BCA"<<endl;
    }
    else if(a1=="BA" && a2=="BC" && a3=="AC")
    {
        cout<<"BAC"<<endl;
    }
    else if(a1=="AB" && a2=="CB" && a3=="CA")
    {
        cout<<"CAB"<<endl;
    }
    else if(a1=="BA" && a2=="CB" && a3=="CA")
    {
        cout<<"CBA"<<endl;
    }
    else
    {
        cout<<"Impossible"<<endl;
    }
    return 0;
}