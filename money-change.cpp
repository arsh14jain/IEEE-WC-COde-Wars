#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int money;
    int count=0;
    cin>>money;
    while(money!=0)
    {
        if(money>=10)
        {
            money=money-10;
            count++;
        }
        else if(money>=5)
        {
            money=money-5;
            count++;
        }
        else
        {
            money--;
            count++;
        }
    }
    cout<<count;
    return 0;
}
