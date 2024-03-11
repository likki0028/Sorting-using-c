#include<stdio.h>
void print(int a[],int n);//array printing function
void is(int a[],int n);//bubble sort function
int main()
{
    int n,a[50],i;
    printf("Enter number of elements :- ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    is(a,n);
    return 0;
}

void is(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
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