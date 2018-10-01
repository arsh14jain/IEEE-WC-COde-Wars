#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[100];
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        cin>>str;
        int n = strlen(str);
        for (int i=0;i<n;i++)
        {
            if(str[i]>='a' && str[i]<='z')
                str[i]='1';
            else if(str[i]>='A' && str[i]<='Z')
                str[i]='0';
            else
                str[i]='2';
        }
        cout<<str<<endl;
    }
    return 0;
}
