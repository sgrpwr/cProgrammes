#include <stdio.h>
#include<conio.h>
#include <math.h>
int main() {
    int a,i,sum=0;
    printf("Sum of natural numbers \n");
    printf("Enter last number : "); 
    scanf("%d",&a);
    for(i=1; i<=a; ++i){
                      sum =sum+i;
                       }

    printf("Sum is %d ",sum); 
        
    getch();
    return 0;
}



