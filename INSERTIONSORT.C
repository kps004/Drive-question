/******************************************************************************

                            Online Objective-C Compiler.
                Code, Compile, Run and Debug Objective-C program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int t,a[1000],n,i,j;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
           scanf("%d",&a[i]);       
    }
    
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            
            for(j=i;j>0;j--)
            {
                if(a[j]<a[j-1])
                {
                    t=a[j];
                    a[j]=a[j-1];
                    a[j-1]=t;
                }
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
