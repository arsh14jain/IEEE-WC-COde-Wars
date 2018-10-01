#include <iostream>
using namespace std;
int main()
{
    long n;
    long sum;
    cin>>n;
    if(n%2==0)
        cout<<-(n/2)<<endl;
    else
        cout<<(n+1)/2<<endl;
    return 0;
}