#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    string dig;
    for(char ch:str)
    {
        if(ch!='+')
        {
            dig+=ch;
        }
    }
    sort(dig.begin(),dig.end());
    string result;
    int count=0;
    for(char ch:dig)
    {
        if(count==0)
        {
            result+=ch;
        }
        else
        result=result+'+'+ch;
        count++;
    }
    cout<<result;
    return 0;
}