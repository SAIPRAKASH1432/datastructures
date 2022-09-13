#include<stdio.h>
int main()
{
	int array[100],i,num;
	printf("enter the size of the array \n");
	scanf("%d",&num);
	printf("enter the elements of the array \n");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("even numbers are");
	for(i=0;i<num;i++)
	{
		if (array[i]%2==0)
		{
			printf("%d\t",array[i] );
		}
	}
	printf("odd numbers are");
	for(i=0;i<num;i++)
	{
		if(array[i]%2!=0)
		{
			printf("%d\t",array[i]);
		}
	}
}