

#include <stdio.h>

int main()
{
    int a[100000],i,p,j,k,l,n,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
    min=32456;
    for(i=0;i<n;i++)
    {
          min=32456;
          p=-1;
        for(j=i;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                p=j;
            }
            
        }
        for(k=i;k<n;k++)
        {
            if(min<=a[k])
            {
                a[p]=a[k];
                a[k]=min;
                break;
            }
        }
    
       }
    
    
for(i=0;i<n;i++)
{
    printf(" %d",a[i]);
}
    return 0;
}
