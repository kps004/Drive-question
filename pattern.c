/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it
    
input
5
5                                                                                               
                                                                                                
1        1                                                                                      
12      21                                                                                      
123    321                                                                                      
1234  4321                                                                                      
1234554321  

*******************************************************************************/

#include <stdio.h>

int main()
{
  
  int i,j,k,l,p=0,n;
  scanf("%d",&n);
  
  for(i=0;i<=n;i++)
  {
     
      p=i;
      for(j=1;j<=p;j++)
      {
        printf("%d",j);
          
       }
      for(k=0;k < n-i;k++)
      {
          printf(" ");
      }
       for(k=0;k < n-i;k++)
      {
          printf(" ");
      }
      for(l=p;l>0;l--)
      {
          printf("%d",l);
      }
      printf("\n");
  }
    return 0;
}
