#include <stdio.h>
int main() {
    int num,  remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    int original=num;
    

    while (num != 0) {
       // remainder contains the last digit
        remainder = num % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       num /= 10;
    }

    if (result == original )
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}
