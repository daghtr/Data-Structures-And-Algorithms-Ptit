#include<conio.h>
#include<stdio.h>

int main()
{
             int a[100],n,i,j;
             printf("\n nhap n vao:");
             scanf("%d",&n);
             printf("\n");
             for(i=1;i<=n;i++)
             {
                  a[i]=0; 
                  printf("%d  ",a[i]);
             }
             printf("\n");
        while(i>0)
           {
                    i=n;
                    while(i>0&&a[i]==1)
                    i--;
                    if(i>0)
                    {
                            a[i]=1;                           
                             for(j=i+1;j<=n;j++)
                             {
                              a[j]=0;
                             }
                             for( i=1;i<=n;i++)
                             {
                                  printf("%d  ",a[i]);
                             }
                                    printf("\n");
                    }
           }
getch();
}
