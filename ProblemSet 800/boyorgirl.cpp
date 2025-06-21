#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    set<char>s1(str.begin(),str.end());
    if(s1.size()%2==1)
    {
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
    return 0;

}