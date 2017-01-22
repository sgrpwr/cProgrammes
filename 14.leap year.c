#include <stdio.h>
#include<conio.h>
#include <math.h>
int main() {
    int year;
    printf("Enter the current year to find whether it is leap year or not!\n");
    printf("year : "); 
    scanf("%d",&year);
    
  if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);
        
    getch();
    return 0;
}



