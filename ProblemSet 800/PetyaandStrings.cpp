#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string st1;
    string st2;
    cin>>st1;
    cin>>st2;
    int n=st1.length();
    for(char& ch:st1)
    {
        ch=tolower(ch);
    }
    for(char& ch:st2)
    {
        ch=tolower(ch);
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(st1[i]<st2[i])
        {
            cout<<-1;
            flag=1;
            break;
        }
        else if(st1[i]>st2[i])
        {
            cout<<1;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<0;
    }
    return 0;
}