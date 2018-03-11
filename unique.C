#include <stdio.h>

int main()
{
	int arr[10];
	int i,j,n=10;
	int ind,elet;
	for(i=0; i<n; i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Array elements are: ");
	for(i=0; i<n; i++)
	printf("%d ",arr[i]);
	printf("\n");
	ind=-1;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
				elet=arr[j];
				ind=j;
				break;
			}				
		}
	}
	if(ind!=-1)
		printf("%d repeated @ %d index\n",elet,ind);
	else
		printf("unique number\n");

	return 0;
}
