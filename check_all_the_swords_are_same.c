/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,k,l,p;
     char str[1000],w[50];
     scanf("%[^\n]",&str);
     for(l=0;str[l]!=',' && str[l]!=' ';l++)
     {
      w[l]=str[l];
     }
     k=l;
     for( l++ ;str[l]!='\0';l++)
     {
           p=0;
           while((str[l]!=',')&&(str[l]!='\0'))
           {
               if(str[l]==w[p])
                p++; 
                
                l++;
                
           }
           
           if(p!=k)
           {
             break;
           }
           
           
     }
  
  if(p==k)
  {
     printf("All THe Elements are same");
  }
  else
  {
      printf("Not all The Elements are same");
  }
    return 0;
}
