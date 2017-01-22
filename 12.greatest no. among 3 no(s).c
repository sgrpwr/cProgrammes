#include <stdio.h>
#include<conio.h>
int main() {
    int a,b,c;
    printf("enter three numbers plz:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)         printf("first number %d is greatest\n",a);
    else if(b>a&&b>c)    printf("second number %d is greatest\n",b);
    else                 printf("third number %d is greatest",c);
    getch();
    return 0;
}


