#include <stdio.h>
#include<conio.h>
#include <math.h>
int main() {
    float a,b,c,root1,root2,det,imaginary,real,s;
    printf("Enter the Cofficients of your quadratic equation\n");
    printf("a : "); 
    scanf("%f",&a);
    printf("b : "); 
    scanf("%f",&b);
    printf("c : "); 
    scanf("%f",&c);
    
    det=(b*b)-(4*a*c);
    printf("det : %f\n",det);
    s=sqrt(det);
    printf("s of det : %f\n",s);
    
    if(det>0){
              root1= ((-b)+sqrt(det))/(2*a);
              root2= ((-b)-sqrt(det))/(2*a);
              printf("Root1 is : %f\n",root1);
              printf("Root2 is : %f\n",root2);
              }
    else if(det==0) {
              root2 = root1= (-b)/(2*a);
              printf("Root1 is : %f\n",root1);
              printf("Root2 is : %f\n",root2);
                    }
    else {
         imaginary=(-b)/(2*a);
         real=sqrt(-det)/(2*a);
         printf("Root1 is : %f-%fi\n",imaginary,real);
         printf("Root2 is : %f+%fi\n",imaginary,real);
         }
    getch();
    return 0;
}



