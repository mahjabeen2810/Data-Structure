#include<stdio.h>
int main()
{
	int a[10],b[10],c[10];
	int i,j,k,n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}
	printf("Even numbers : ");
	for(i=0;i<j;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("Odd numbers : ");
	for(i=0;i<k;i++)
	{
		printf("%d\t",c[i]);
	}
	return 0;
}
