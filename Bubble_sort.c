#include<stdio.h>
void bs(int a[],int n);//bubble sort function
void print(int a[],int n);//array printing function
int main()
{
    int i,a[50],n;
    printf("enter number of elements:- ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bs(a,n);
    print(a,n);
    return 0;
}
void bs(int a[],int n)
{
    int flag,i,j,temp;
    for(i=0;i<n-1;i++)
    {
        flag=0;//optimization
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)//optimization
        {
            break;
        }
    }
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
