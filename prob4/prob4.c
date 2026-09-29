#include <stdio.h>
int main(){
    int YEARS = 4 ;
    const int DAYS_PER_YEAR = 365 ;
    int total_days = YEARS * DAYS_PER_YEAR;
    printf("YEARS = %d\nDAYS PER YEAR = %d\nTOTAL DAYS = %d",YEARS , DAYS_PER_YEAR, total_days);
    return 0;
}