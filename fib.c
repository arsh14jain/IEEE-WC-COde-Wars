#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long fib(long long n) 
{ 
    long long i,r=0,f[n];   
    f[0] = 1; 
    f[1] = 1; 
    for (i = 2; i < n; i++) 
        f[i] = (f[i - 1]%10 + f[i - 2]%10) % 10; 
    for(i=0;i<n;i++)
        r=r+f[i];  
    return r%10; 
}

int main() 
{    
    long long n;
    scanf("%lli",&n);
    printf("%lli",fib(n)); 
    return 0;
}