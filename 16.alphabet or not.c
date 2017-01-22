#include <stdio.h>
#include<conio.h>
#include <math.h>
int main() {
    char c;
    printf("Enter anything to know whether is it an alphabet?.\n");
    printf("Anything : "); 
    scanf("%c",&c);
    
  if(c>='a'&&c<='z'||c>='A'&&c<='Z')
    {
             printf("That anything was a alphabet lol! ");
    }
    else
        printf("Not an alphabet try another.");
        
    getch();
    return 0;
}



