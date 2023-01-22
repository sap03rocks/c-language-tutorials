#include<stdio.h>
int main()
{
    int i,n,c=0;
    printf ("Enter a number n");
    scanf ("%d",&n);
    if (n==1)
      printf("%d is neither prime nor composite",n);
    else
    { 
        for (i=1;i<=n;i++)
        {
            if(n%i==0) 
            c=c+1; 
        //flags prime when a number is exactly divisible with the number provided
        }
        if (c==2)
          printf ("PRIME");
        else
           printf ("COMPOSITE");
        return 0;
    }
}