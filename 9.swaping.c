#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,temp;
       printf("Enter first number (a) plz:");
       scanf("%d",&a);
       printf("Enter second number (b) plz:");
       scanf("%d",&b);
       temp=a;
       a=b;
       b=temp;
       printf("after swaping (a) is : %d",a);
       printf("after swaping (b) is : %d",b);
       getch();
       return 0;
       }


