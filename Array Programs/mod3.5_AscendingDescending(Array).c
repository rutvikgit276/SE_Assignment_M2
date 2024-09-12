// 5. WAP to take two Array input from user and sort them in ascending or 
//  descending order as per user’s choice 
 
#include<stdio.h>
main()
{
	int a[50], i, size, j, temp;
	
	printf("\n\n\t Enter size of array : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\t Enter Element[%d]: ", i);
		scanf("%d",&a[i]);
	}

	printf("\n\n\t Before Sorting -------");
	for(i=0;i<size;i++)
	{
		printf("\n\n\t a[%d] :  %d",i, a[i]);
	}
	
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}


	printf("\n\n\t After Sorting -------");
	for(i=0;i<size;i++)
	{
		printf("\n\n\t a[%d] :  %d",i, a[i]);
	}

}
