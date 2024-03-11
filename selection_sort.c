#include<stdio.h>
void print(int a[],int n);//array printing function
void ss(int a[],int n);//bubble sort function
int main()
{
    int n,a[50],i;
    printf("Enter number of elements :- ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ss(a,n);
    return 0;
}
void ss(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            min=j;
        }
        if(min!=i)
        {
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
        for(j=0;j<n;j++)
        {
            printf("%d  ",a[j]);
        }
        printf("\n");
    }
    print(a,n);
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}