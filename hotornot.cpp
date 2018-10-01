#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    char str[100];
    for(int k=0;k<t;k++)
    {
        int a[150]={0};
        cin>>str;
        int n=strlen(str);
        if(n%2==0)
        {
            int flag=1;
            for(int i=0;i<n/2;i++)
            {
                a[str[i]]++;
            }
            for(int i=n/2;i<n;i++)
            {
                a[str[i]]--;
            }
            for(int i=0;i<150;i++)
            {
                if(a[i]!=0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                cout<<"NOT"<<endl;
            else
                cout<<"HOT"<<endl;
        }
        else
        {
            int flag=1;
            for(int i=0;i<n/2;i++)
            {
                a[str[i]]++;
            }
            for(int i=n/2+1;i<n;i++)
            {
                a[str[i]]--;
            }
            for(int i=0;i<150;i++)
            {
                if(a[i]!=0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                cout<<"NOT"<<endl;
            else
                cout<<"HOT"<<endl;
        }
    }
    
    return 0;
}
