#include<stdio.h>
void scan(int a[],int n);
void cs(int a[],int max,int n);
int max1(int a[],int n);
void print (int a[],int n1);
int main()
{
    int a[100],i,m,n;
    printf("Enter number of elements:- ");
    scanf("%d",&n);
    scan(a,n);
    m=max1(a,n);
    cs(a,m,n);
    print(a,n);
    return 0;
}
void scan(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int max1(int a[],int n)
{
    int i,max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;

}
void cs(int a[],int max,int n)
{
    int count[max+1],i,b[n];
    for(i=0;i<max+1;i++)
    {
        count[i]=0;
    }
    for(i=0;i<n;i++)
    {
        ++count[a[i]];
    }
    for(i=1;i<max+1;i++)
    {
        count[i]+=count[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        int p;
        p= --count[a[i]];
        b[p]=a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
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
