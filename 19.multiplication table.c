#include <stdio.h>
#include<conio.h>
#include <math.h>
int main() {
    int a,i,t=1;
    printf("Multiplication table \n");
    printf("Enter any number if you want multiplication table of it : "); 
    scanf("%d",&a);
    printf("Table :\n");
    for(i=1; i<=10; ++i){
                      t = a*i;
                      printf("%d*%d=%d \n",a,i,t);
                       }

    //printf("Factorial of %d is : %d ",a,fact); 
        
    getch();
    return 0;
}



