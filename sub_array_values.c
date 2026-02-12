#include<stdio.h>
int main()
{
int size;
printf("enter the size of the array \n");
scanf("%d",&size);
int a[size];
for (int i=0;i<=size-1;i++)
{
    printf("enter the %d value :\n",(i+1));
    scanf("%d",&a[i]);
    for(int i=0;i<=size-1;i++)
    {
        if(a[i]+1==a[i+1])
        {
        printf("%d,%d,",a[i],a[i+1]);
        i++;
          }
        else if(a[i]-1==a[i-1])
        {
        printf("%d\n",a[i]);
        }
}}
return 0;
}  