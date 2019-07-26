/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,c,l,p,m=0,f=0;
    char str[1000],t,s[100];
    scanf("%[^\n]",str);
    scanf("\n");
    scanf("%[^\n]",s);
    for(p=0;str[p]!='\0';p++);
    
    for(l=0;l<p;l++)
    {
        c=1;
        if(str[l]!='*')
     {
       for(j=l+1;j < p;j++)
       {
          if(str[l]==str[j])
          {
           c++;
           str[j]='*';
          }
           
           
       }
          if(c>=m)
          {
              t=str[l];
              m=c;
             }
          }
       
     }  
     
     
    
    for(i=0;s[i]!='\0';i++)
    {
    if(t==s[i])
    {
        f++;
    }
    
    }
   
    if(m==f)
    {
        printf("Yes");
    }
      else
      {
          printf("No");
      }
    return 0;
}
