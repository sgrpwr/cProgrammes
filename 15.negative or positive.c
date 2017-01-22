#include <stdio.h>
#include<conio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter any number to know whether it is negative or positive.\n");
    printf("Number : "); 
    scanf("%d",&n);
    
  if(n>=0)
    {
             printf("Number is postive");
    }
    else
        printf("Number is negative");
        
    getch();
    return 0;
}



