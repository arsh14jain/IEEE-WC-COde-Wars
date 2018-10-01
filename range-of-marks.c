#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int max=a[0];
	int min=a[0];
	for(int i=1;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
		else if(min>a[i])
			min=a[i];
	}
	printf("%d\n", max-min);
}