#include <stdio.h>
#include<conio.h>
#include <math.h>
int main() {
    int a,i,fact=1;
    printf("Factorial! \n");
    printf("Enter any number if you want to find it's factorial : "); 
    scanf("%d",&a);
    for(i=a; i>1; i--){
                      fact =fact*i;
                       }

    printf("Factorial of %d is : %d ",a,fact); 
        
    getch();
    return 0;
}



