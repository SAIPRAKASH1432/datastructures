#include<stdio.h>
int main()
{
	int first=0,second=1,i,n,sum=0;
    printf("enter the number of terms\n");
	scanf("%d",&n);
	printf("fibonacci series\n ");
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			sum=i;
		}
		else
		{
			sum=first+second;
			first=second;
			second=sum;
		}
		printf("%d",sum);
		}	
		return 0;
}