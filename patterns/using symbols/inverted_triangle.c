// *************
//   ***********
//    *********
//     *******
//      *****
//       ***
//        *

#include <stdio.h>

int main(){
    int i,j,k,m=1;
    printf("\n");
    for(i=7;i>=1;i--)
    {
        for(j=1;j<=m;j++)
        {
            printf(" ");
        }

        for(k=1; k<=((2*i)-1);k++)
        {
            printf("*");
        }
     m++;
     printf("\n");



    }

return 0; 
}