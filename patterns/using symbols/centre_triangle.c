

//     *    
//   *  *   
//  *  *  *  
//  *  *  *  * 


#include <stdio.h>

int main(){

    int i,j,k,l;
    printf("/n");


    for(i=1;i<5;i++){
        
      for(j=4-i;j>=i;j--){
        printf(" ");
      }

      for (k=1;k<=i;k++){
         printf(" * ");
        }

   
      for(l=4-i;l>=1;l--){
         printf(" ");
         }

     printf("\n");
    }
}