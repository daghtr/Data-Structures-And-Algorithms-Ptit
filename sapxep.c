#include<stdio.h>
void nhap(int a[],int n)
{
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void in(int a[],int n)
{
	for( int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void interchangesort(int a[],int n)  // doi cho truc tiep
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		printf("Buoc %d: ",i+1); in(a,n);
	}
}
void selectionsort(int a[],int n)   //sap xep chon
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
			if(a[j]<a[min])
				min=j;
			if(min!=i)
			{
				a[min]=a[i]+a[min];
				a[i]=a[min]-a[i];
				a[min]=a[min]-a[i];
			}
		printf("Buoc %d: ",i+1); in(a,n);
	}
}
void bubblesort(int a[],int n)  // sap xep noi bot
{
	for(int i=0;i<n-1;i++)
	{
		int check=1;
		for(int j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				check=0;
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		if(check==1) break;
		printf("Buoc %d: ",i+1); in(a,n);
	}
}
void InsertionSort(int a[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		j=i-1; k=a[i];
		while(a[j]>k && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
		printf("Buoc %d: ",i); in(a,i+1);
	}
}
main()
{
	int a[100],n;
	scanf("%d",&n);
	nhap(a,n);
	interchangesort(a,n); printf("\n");
	nhap(a,n);
	selectionsort(a,n);	printf("\n");
	nhap(a,n);
	bubblesort(a,n);	printf("\n");
	nhap(a,n);
	InsertionSort(a,n);
}
