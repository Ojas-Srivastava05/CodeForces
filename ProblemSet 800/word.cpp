#include<iostream>
#include <algorithm>  
#include <cctype>
using namespace std;

int main()
{
    string st;
    getline(cin,st);
    string dummy=st;
    sort(dummy.begin(),dummy.end());
    int l=st.length();
    if(isupper(dummy[l/2]))
    {
        for(char &ch:st)
        {
            ch=toupper(ch);
        }
    }
    else
    {
        for(char &ch:st)
        {
            ch=tolower(ch);
        }
    }
    cout<<st;
    return 0;
}