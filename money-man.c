#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,arr[100],temp,sum=0,g,ans,h,sum2=0;
    scanf("%d %d",&b,&a);
    for(int i=0;i<b;i++)
        scanf("%d",&arr[i]);
    int i,j;
 
    for(i=0;i<b-1;i++)           //sorting array
    {
        for(j=0;j<b-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }

    g= b/a;
    h= b%a;
    int k=1;
    for(i=0;i<b-h;i++)
    {
        sum=k*arr[i]+sum;

        if(((i+1)%a)==0)
            k++;
    }

    for(i=b-h;i<b;i++)
        sum2=sum2+arr[i];

    ans =    sum +sum2*k ; 
    printf("%d",ans);
    return 0;
}