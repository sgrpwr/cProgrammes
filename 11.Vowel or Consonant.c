#include<stdio.h>
#include<conio.h>
int main(){
    char a;
       printf("Enter any character plz:");
       scanf("%c",&a);
       //printf("Enter second number (b) plz:");
       //scanf("%d",&b);
       if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            printf("Vowel!");
            }
            else printf("Consonant");  
       getch();
       return 0;
       }
