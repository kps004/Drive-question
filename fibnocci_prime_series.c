
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[1000],i=0,j,k=2,n=0,f1=0,f=0,s=1,t=0,p=0;
    scanf("%d",&n);
    
    
    for(i=0;i < n;i++)
    {
     if(i%2==0)
     {
        t=f1+s;
         a[p]=t;
         p++;
        f1=s;
        s=t;
     
     }
       else
           {
                for(;k>=0;k++)
                {
                    f=0;
                    
                    for(j=2;j<k;j++)
                    {
                        if(k%j==0)
                        {
                            f++;
                        }
                    }
                    
                    if(f==0)
                    {
                      
                        a[p]=k;
                        k++;
                        p++;
                        break;
                    }
                }
         }
    }
        
printf("%d",a[p-1]);
    return 0;
}
