/*////////////////

ABCDEFGHIJKLMNOPQRSTUVWXYZ
3
A
*B
**C
*D
E
*F
**G
*H
I
*J
**K
*L
M
*N
**O
*P
Q
*R
**S
*T
U
*V
**W
*X
Y
*Z

/////////////////////////////////////////////////////////////*/
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

  int i,j,k,l,n,m,f=0;
  char str[1000];
  scanf("%[^\n]",str);
  scanf("\n");
  scanf("%d",&n);
  k=0;f=0;
  for(l=0;str[l]!='\0';l++)
  {
      if(f==0)
      {
          k++;
          if(k==n)
          {
              f=1;
          }
          
          for(j=1;j<k;j++)
          {
              printf("*");
          }
          printf("%c\n",str[l]);
      }
      else if(f==1)
      {
          k--;
          if(k==1)
          {
              f=0;
          }
          for(j=k;j>1;j--)
          {
              printf("*");
          }
          printf("%c\n",str[l]);
      }
      
      
  }
  
  
  
  



    return 0;
}
