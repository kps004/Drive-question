/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int h,u,d,l,p,t;
     scanf("%d",&t);
     while(t>=0)
     {
         scanf("%d",&h);
         scanf("%d",&d);
         scanf("%d",&u);
         
         p = (h-d)/(u-d);
         p++;
         printf("%d\n",p);
         
         
         
         
         
         t--;
     }
    
    return 0;
}
