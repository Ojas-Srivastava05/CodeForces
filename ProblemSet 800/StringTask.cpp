#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    string ans;
    for(char ch:st)
    {
        ch=tolower(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y')
        {
            continue;
        }
        else
        {
            ans=ans+"."+ch;
        }
    }
    cout<<ans;
    return 0;
}