/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a[10000],t[100][50],i,j,max=0,l=0,s1=0,s2=0,f=0,p=0,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   
   for(i=0;i<n;i++)
   {
       f=0;
       if(a[i]%2==0)
       {
           t[s1][s2]=a[i];
           s2++;
           f=1;
       }
       
       else if(f==0)
       {
           s2=0;
           s1++;
           f=0;
       }
   }
   
   for(i=0;i<s1;i++)
   {
       for(j=0;t[i][j]!=0;j++);
       
       if(max<j)
       {
           max=j;
           p=i;
       }
           
   }
   
   s2=0;
   max=3624;
   while(s2<50)
  {
      if(t[p][s2]<max)
      {
          max=t[p][s2];
      }
      s2++;
  }
  printf("%d",max);
    return 0;
}
