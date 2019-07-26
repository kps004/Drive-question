/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,k,l;
    char str[100];
    scanf("%[^\n]",str);
    for(l=0;str[l]!='\0';l++)
    {
        switch(str[l])
        {
           case 'a':
           case 'e':
           case 'i':
           case  'o':
           case 'u': str[l]=str[l]-32;

        
        
        }
    }
    printf("%s",str);
    return 0;
}
